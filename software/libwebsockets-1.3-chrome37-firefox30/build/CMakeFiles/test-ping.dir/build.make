# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wenzong/software/libwebsockets-1.3-chrome37-firefox30

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wenzong/software/libwebsockets-1.3-chrome37-firefox30/build

# Include any dependencies generated for this target.
include CMakeFiles/test-ping.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test-ping.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test-ping.dir/flags.make

CMakeFiles/test-ping.dir/test-server/test-ping.c.o: CMakeFiles/test-ping.dir/flags.make
CMakeFiles/test-ping.dir/test-server/test-ping.c.o: ../test-server/test-ping.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/wenzong/software/libwebsockets-1.3-chrome37-firefox30/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/test-ping.dir/test-server/test-ping.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/test-ping.dir/test-server/test-ping.c.o   -c /home/wenzong/software/libwebsockets-1.3-chrome37-firefox30/test-server/test-ping.c

CMakeFiles/test-ping.dir/test-server/test-ping.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test-ping.dir/test-server/test-ping.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/wenzong/software/libwebsockets-1.3-chrome37-firefox30/test-server/test-ping.c > CMakeFiles/test-ping.dir/test-server/test-ping.c.i

CMakeFiles/test-ping.dir/test-server/test-ping.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test-ping.dir/test-server/test-ping.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/wenzong/software/libwebsockets-1.3-chrome37-firefox30/test-server/test-ping.c -o CMakeFiles/test-ping.dir/test-server/test-ping.c.s

CMakeFiles/test-ping.dir/test-server/test-ping.c.o.requires:
.PHONY : CMakeFiles/test-ping.dir/test-server/test-ping.c.o.requires

CMakeFiles/test-ping.dir/test-server/test-ping.c.o.provides: CMakeFiles/test-ping.dir/test-server/test-ping.c.o.requires
	$(MAKE) -f CMakeFiles/test-ping.dir/build.make CMakeFiles/test-ping.dir/test-server/test-ping.c.o.provides.build
.PHONY : CMakeFiles/test-ping.dir/test-server/test-ping.c.o.provides

CMakeFiles/test-ping.dir/test-server/test-ping.c.o.provides.build: CMakeFiles/test-ping.dir/test-server/test-ping.c.o

# Object files for target test-ping
test__ping_OBJECTS = \
"CMakeFiles/test-ping.dir/test-server/test-ping.c.o"

# External object files for target test-ping
test__ping_EXTERNAL_OBJECTS =

bin/libwebsockets-test-ping: CMakeFiles/test-ping.dir/test-server/test-ping.c.o
bin/libwebsockets-test-ping: CMakeFiles/test-ping.dir/build.make
bin/libwebsockets-test-ping: lib/libwebsockets.a
bin/libwebsockets-test-ping: /usr/lib64/libz.so
bin/libwebsockets-test-ping: /usr/lib64/libssl.so
bin/libwebsockets-test-ping: /usr/lib64/libcrypto.so
bin/libwebsockets-test-ping: CMakeFiles/test-ping.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable bin/libwebsockets-test-ping"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test-ping.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test-ping.dir/build: bin/libwebsockets-test-ping
.PHONY : CMakeFiles/test-ping.dir/build

CMakeFiles/test-ping.dir/requires: CMakeFiles/test-ping.dir/test-server/test-ping.c.o.requires
.PHONY : CMakeFiles/test-ping.dir/requires

CMakeFiles/test-ping.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test-ping.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test-ping.dir/clean

CMakeFiles/test-ping.dir/depend:
	cd /home/wenzong/software/libwebsockets-1.3-chrome37-firefox30/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wenzong/software/libwebsockets-1.3-chrome37-firefox30 /home/wenzong/software/libwebsockets-1.3-chrome37-firefox30 /home/wenzong/software/libwebsockets-1.3-chrome37-firefox30/build /home/wenzong/software/libwebsockets-1.3-chrome37-firefox30/build /home/wenzong/software/libwebsockets-1.3-chrome37-firefox30/build/CMakeFiles/test-ping.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test-ping.dir/depend

