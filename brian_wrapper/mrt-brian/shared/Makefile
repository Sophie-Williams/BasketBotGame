SHELL = /bin/sh

.SUFFIXES:
.SUFFIXES: .cpp .h .o .y .l .tab.h .tab.c .tab.o .c .cc .hh

ifndef srcdir
srcdir = .
endif

ifndef project_root
project_root=../..
endif

ifndef module_root
module_root=..
endif

##debug only
DEBUG = 1
CDEBUG = -g -O0

ifndef CDEBUG
CDEBUG = -O3
endif

ifdef DEBUG
CWDEBUG = -DCWDEBUG -lcwd
endif

CXX = g++
AR = ar
FLEX = flex
BISON = bison
DOC = kdoc
MOC = /usr/lib/qt3/bin/moc
DEFS += -DGCC_VER=$(shell $(CXX) -dumpversion | sed 's/\([0-9]*\).\([0-9]\)[0-9\.\-]*/\1\2/')
LIBS += $(LIB_FLAGS)  $(addprefix -l,$(PROJECT_LIBS)) $(addprefix -l,$(SYSTEM_LIBS))
CURRENT_LIB = $(patsubst %,../lib/lib%.a,$(MODULE))
SRC_DIRS = $(foreach dir,$(srcdir),-I$(dir))
INCLUDE_DIRS += $(patsubst %,-I%, $(wildcard $(project_root)/*/include)) 
LIB_DIRS += $(patsubst %, -L%, $(wildcard $(project_root)/*/lib))
CINCLUDE += -I.  -I$(project_root)/shared $(SRC_DIRS) $(INCLUDE_DIRS) $(LIB_DIRS) 
ALL_LIBS = $(wildcard $(project_root)/*/lib/lib*.a)
CXXFLAGS += -march=core2 -fomit-frame-pointer -pipe -Wall  $(CDEBUG) $(CWDEBUG) $(CINCLUDE) $(DEFS) -fpermissive -fPIC
BISONFLAGS = -d #-t
FLEXFLAGS =

RM = rm -fr

-prefix = /usr/local

bindir = $(module_root)/bin
testdir = $(module_root)/test
includedir = $(module_root)/include
libdir = $(module_root)/lib
infodir = $(module_root)/doc
configdir = $(module_root)/config
currentdir = $(shell pwd)

ifndef exe_name
exe_name = test
endif

ifndef FORMAT
FORMAT = html
endif

dependencies_file := $(filter-out $(filters),$(foreach dir,$(srcdir),$(wildcard $(dir)/*.d)))

sources := $(filter-out $(filters),$(foreach dir,$(srcdir),$(wildcard $(dir)/*.cpp)))
sources_c := $(filter-out $(filters),$(foreach dir,$(srcdir),$(wildcard $(dir)/*.c)))
sources_cc:= $(filter-out $(filters),$(foreach dir,$(srcdir),$(wildcard $(dir)/*.cc)))

headers := $(filter-out $(filters),$(foreach dir,$(srcdir),$(wildcard $(dir)/*.h)))
includes := $(addprefix $(includedir)/,$(headers))
bison_sources := $(filter-out $(filters),$(foreach dir,$(srcdir),$(wildcard $(dir)/*.y)))
flex_sources := $(filter-out $(filters),$(foreach dir,$(srcdir),$(wildcard $(dir)/*.l)))
objects := $(patsubst %.cpp,%.o,$(sources)) \
           $(patsubst %.cc,%.o,$(sources_cc)) \
           $(filter-out %.tab.o %flex.o, $(patsubst %.c,%.o,$(sources_c)))
bison_c := $(patsubst %gram.y,%gram.tab.c,$(bison_sources))
bison_h := $(patsubst %gram.y,%gram.tab.h,$(bison_sources))
bison_objects := $(patsubst %gram.y,%gram.tab.o,$(bison_sources))
flex_c := $(patsubst %flex.l,%flex.c,$(flex_sources))
flex_objects := $(patsubst %flex.l,%flex.o,$(flex_sources))
dependencies := $(patsubst %.cpp,%.d,$(sources))
dependencies_bison := $(patsubst %.y,%.tab.d,$(bison_sources))
dependencies_flex := $(patsubst %.l,%.d,$(flex_sources))
all_objects += $(objects) $(bison_objects) $(flex_objects)

vpath % $(project_root)/shared

cleanall: clean
	$(RM) ../bin/* ../lib/* ../include/* #../test/*

ifneq (,$(dependencies_file))
-include $(dependencies_file)
endif

all:  dep $(all_objects) $(includes) lib exe

exe: project_libs dep $(moc_sources) $(bindir)/$(exe_name)

$(bindir)/$(exe_name): $(all_objects) $(ALL_LIBS) #$(includes)
	$(CXX) $(CXXFLAGS) -o $(bindir)/$(exe_name) $(all_objects) $(LIBS)


test: project_libs dep $(all_objects) $(includes)
	$(CXX) $(CXXFLAGS) -o $(testdir)/test $(all_objects) $(LIBS)
	-cp -u $(configdir)/*.ini $(testdir)

lib: project_libs dep $(CURRENT_LIB) $(includes)

project_libs: FORCE
	for module in $(PROJECT_LIBS); do	\
		cd $(project_root); make MODULE=$$module; cd $(currentdir);	\
	done

$(CURRENT_LIB): $(all_objects) 
	$(AR) -r $@ $(all_objects)

$(includedir)/%.h: %.h
	-cp -u $< $(includedir)

install:

uninstall:

clean:
	for dir in $(srcdir); do	\
		$(RM) $$dir/*.o $$dir/*.d $$dir/*~ $$dir/*.tab.* $$dir/*flex.c $$dir/*.moc $$dir/*#;	\
	done


distclean:

mostlyclean:

maintainer-clean:

dist:

doc:
	$(DOC) -f $(FORMAT) -d $(infodir)/$(FORMAT) -n $(MODULE) --html-logo $(MODULE).jpg $(filter-out %.tab.h,$(headers))

tar: cleanall
	cd ../..;tar cvfz $(MODULE).tgz $(MODULE)

dep: $(bison_c) $(flex_c) $(dependencies) $(dependencies_bison) $(dependencies_flex) 

%.d : %.cpp 
	$(SHELL) -ec '$(CXX) -MM $(DTEST) $(CXXFLAGS) $(CINCLUDE) $< | sed '\''s/\($(subst /,\/,$*)\)\.o[ :]*/\1.o $(subst /,\/,$@) : /g'\'' > $@'

%.d : %.cc 
	$(SHELL) -ec '$(CXX) -MM $(DTEST) $(CXXFLAGS) $(CINCLUDE) $< | sed '\''s/\($(subst /,\/,$*)\)\.o[ :]*/\1.o $(subst /,\/,$@) : /g'\'' > $@'

%.d : %.c
	$(SHELL) -ec '$(CXX) -MM $(DTEST) $(CXXFLAGS) $(CINCLUDE) $< | sed '\''s/\($*\)\.o[ :]*/\1.o $@ : /g'\'' > $@'


%.o : %.cpp
	$(CXX) -c $(DTEST) $(CPPFLAGS) $(CXXFLAGS) $< -o $@

%.o : %.cc
	$(CXX) -c $(DTEST) $(CPPFLAGS) $(CXXFLAGS) $< -o $@

%.o : %.c
	$(CXX) -c $(DTEST) $(CPPFLAGS) $(CXXFLAGS) $< -o $@


%flex.c : %flex.l
	$(FLEX) $(FLEXFLAGS) -P$* -o$@ $<

%gram.tab.c : %gram.y
	$(BISON) $(BISONFLAGS) -p $* $<

%.tab.h : %.tab.c

%.moc : %.h
	$(MOC) $< -o $@

FORCE: ;

.PHONY: cleanall clean tar
