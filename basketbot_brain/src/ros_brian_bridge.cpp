#include <ros/ros.h>

#include <ros/package.h>
#include "RosBrianBridge.h"
std::string brian_config_path = ros::package::getPath("basketbot_brain") + "/config";

float RosBrianBridge::maxSpeeds = 0.25;

void RosBrianBridge::setSpeed(float v, float rot)
{
	geometry_msgs::Twist vel_msg;
	vel_msg.angular.z = rot;
	vel_msg.linear.x = v;
	commandsPublisher.publish(vel_msg);


	//limit values
	float maxV = maxSpeeds,maxR = maxSpeeds;
	v=std::min(std::max(v,-maxV),maxV);
	rot=std::min(std::max(rot,-maxR),maxR);
	

	r2p::Velocity ve;
	ve.x = v;
	ve.w = rot * 10.0;
	commandsPublisherTiltone.publish(ve);
}

RosBrianBridge::RosBrianBridge():brain(this,brian_config_path)
{
	predictionSubscriber = node.subscribe("PosPrediction", 2, &RosBrianBridge::predictionCallback,this);
	commandsPublisher = node.advertise<geometry_msgs::Twist>("/cmd_vel", 10);
	commandsPublisherTiltone = node.advertise<r2p::Velocity>("/tiltone/velocity", 10);

	suggestedCmdVelKey = node.subscribe("suggested_cmd_vel", 2,&RosBrianBridge::desiredCmdVelKeyCallback,this);
	suggestedCmdVelJoy = node.subscribe("/tiltone/velocityD", 2,&RosBrianBridge::desiredCmdVelJoyCallback,this);


	suggestedLinearSpeed = suggestedAngularSpeed = 0;

}

void RosBrianBridge::desiredCmdVelJoyCallback(const r2p::Velocity::ConstPtr& msg)
{
	float r = msg->w / 10.0;
	float v = msg->x;
	suggestedLinearSpeed=v;
	suggestedAngularSpeed=r;

}
void RosBrianBridge::desiredCmdVelKeyCallback(const geometry_msgs::Twist::ConstPtr& msg)
{
	float v = 5.0*msg->linear.x;
	float r = msg->angular.z;

	suggestedLinearSpeed = v;
	suggestedAngularSpeed=r;
	last_joy_suggestion = ros::Time::now();
}


void RosBrianBridge::predictionCallback(const player_tracker::PosPrediction::ConstPtr& msg)
{
	float x = msg->position.x;
	float y = msg->position.y;
	float vx = msg->velocity.x;
	float vy = msg->velocity.y;


	predictedX = x;
	predictedY = y;
	predictedVX = vx;
	predictedVY = vy;
	currentUnreliability = msg->unreliability;
	std::cout << "predictionCallback "<<x<<" " << y <<std::endl;
}

void RosBrianBridge::spin()
{
	ros::Rate r(30);
	while(ros::ok()) {
		ros::spinOnce();
		brain.spinOnce();
		r.sleep();
	}
}

float RosBrianBridge::getPlayerDistance()
{
	return sqrt(predictedX*predictedX+predictedY*predictedY);
}
float RosBrianBridge::getPlayerOrientation()
{
	return atan2(predictedY,predictedX);
}
float RosBrianBridge::getPlayerVelocityY()
{
	return predictedVY;
}
float RosBrianBridge::getPlayerVelocityX()
{
	return predictedVX;
}
float RosBrianBridge::getPlayerPositionUnreliability()
{
	return currentUnreliability;
}

float RosBrianBridge::getSuggestedLinearSpeed()
{
	if(ros::Time::now() - last_joy_suggestion > ros::Duration(0.5))
		return 0;
	return suggestedLinearSpeed;
}
float RosBrianBridge::getSuggestedAngularSpeed()
{
	if(ros::Time::now() - last_joy_suggestion > ros::Duration(0.5))
		return 0;
	return suggestedAngularSpeed;
}
int main(int argc, char** argv)
{
	ros::init(argc, argv, "basketbot_brain");
	RosBrianBridge messenger;
	messenger.spin();
}
