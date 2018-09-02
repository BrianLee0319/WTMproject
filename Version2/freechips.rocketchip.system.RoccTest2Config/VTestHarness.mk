# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VTestHarness.mk

default: /home/brianlee/Documents/project-template/rocket-chip/emulator/emulator-freechips.rocketchip.system-RoccTest2Config-debug

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/brianlee/Documents/project-template/rocket-chip/emulator/verilator/install/share/verilator
# Path to SystemPerl kit top (from $SYSTEMPERL)
SYSTEMPERL = 
# Path to SystemPerl kit includes (from $SYSTEMPERL_INCLUDE)
SYSTEMPERL_INCLUDE = 
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# SystemPerl output mode?  0/1 (from --sp)
VM_SP = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# SystemPerl or SystemC output mode?  0/1 (from --sp/--sc)
VM_SP_OR_SC = 0
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VTestHarness
# Module prefix (from --prefix)
VM_MODPREFIX = VTestHarness
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-O1 -std=c++11 -I/home/brianlee/Documents/rocc/riscv/include -DVERILATOR -DTEST_HARNESS=VTestHarness -include /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/csrc/verilator.h -include /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.plusArgs \
	-I/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src-debug -include /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src-debug/freechips.rocketchip.system.RoccTest2Config/VTestHarness.h \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	 -L/home/brianlee/Documents/rocc/riscv/lib -Wl,-rpath,/home/brianlee/Documents/rocc/riscv/lib -L/home/brianlee/Documents/project-template/rocket-chip/emulator -lfesvr -lpthread \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	SimDTM \
	SimJTAG \
	emulator \
	remote_bitbang \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/brianlee/Documents/project-template/rocket-chip/src/main/resources/csrc \


### Default rules...
# Include list of all generated classes
include VTestHarness_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

SimDTM.o: /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/csrc/SimDTM.cc
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimJTAG.o: /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/csrc/SimJTAG.cc
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
emulator.o: /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/csrc/emulator.cc
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
remote_bitbang.o: /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/csrc/remote_bitbang.cc
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/brianlee/Documents/project-template/rocket-chip/emulator/emulator-freechips.rocketchip.system-RoccTest2Config-debug: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@ $(LIBS) $(SC_LIBS) 2>&1 | c++filt


# Verilated -*- Makefile -*-
