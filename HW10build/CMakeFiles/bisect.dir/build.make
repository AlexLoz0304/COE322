# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alozano0304/COE322/HW10

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alozano0304/COE322/HW10build

# Include any dependencies generated for this target.
include CMakeFiles/bisect.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/bisect.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bisect.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bisect.dir/flags.make

CMakeFiles/bisect.dir/zeroclasstest.cpp.o: CMakeFiles/bisect.dir/flags.make
CMakeFiles/bisect.dir/zeroclasstest.cpp.o: /home/alozano0304/COE322/HW10/zeroclasstest.cpp
CMakeFiles/bisect.dir/zeroclasstest.cpp.o: CMakeFiles/bisect.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alozano0304/COE322/HW10build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bisect.dir/zeroclasstest.cpp.o"
	/opt/intel/oneapi/compiler/2024.2/bin/icpx $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bisect.dir/zeroclasstest.cpp.o -MF CMakeFiles/bisect.dir/zeroclasstest.cpp.o.d -o CMakeFiles/bisect.dir/zeroclasstest.cpp.o -c /home/alozano0304/COE322/HW10/zeroclasstest.cpp

CMakeFiles/bisect.dir/zeroclasstest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bisect.dir/zeroclasstest.cpp.i"
	/opt/intel/oneapi/compiler/2024.2/bin/icpx $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alozano0304/COE322/HW10/zeroclasstest.cpp > CMakeFiles/bisect.dir/zeroclasstest.cpp.i

CMakeFiles/bisect.dir/zeroclasstest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bisect.dir/zeroclasstest.cpp.s"
	/opt/intel/oneapi/compiler/2024.2/bin/icpx $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alozano0304/COE322/HW10/zeroclasstest.cpp -o CMakeFiles/bisect.dir/zeroclasstest.cpp.s

CMakeFiles/bisect.dir/zeroclasslib.cpp.o: CMakeFiles/bisect.dir/flags.make
CMakeFiles/bisect.dir/zeroclasslib.cpp.o: /home/alozano0304/COE322/HW10/zeroclasslib.cpp
CMakeFiles/bisect.dir/zeroclasslib.cpp.o: CMakeFiles/bisect.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alozano0304/COE322/HW10build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/bisect.dir/zeroclasslib.cpp.o"
	/opt/intel/oneapi/compiler/2024.2/bin/icpx $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bisect.dir/zeroclasslib.cpp.o -MF CMakeFiles/bisect.dir/zeroclasslib.cpp.o.d -o CMakeFiles/bisect.dir/zeroclasslib.cpp.o -c /home/alozano0304/COE322/HW10/zeroclasslib.cpp

CMakeFiles/bisect.dir/zeroclasslib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bisect.dir/zeroclasslib.cpp.i"
	/opt/intel/oneapi/compiler/2024.2/bin/icpx $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alozano0304/COE322/HW10/zeroclasslib.cpp > CMakeFiles/bisect.dir/zeroclasslib.cpp.i

CMakeFiles/bisect.dir/zeroclasslib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bisect.dir/zeroclasslib.cpp.s"
	/opt/intel/oneapi/compiler/2024.2/bin/icpx $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alozano0304/COE322/HW10/zeroclasslib.cpp -o CMakeFiles/bisect.dir/zeroclasslib.cpp.s

# Object files for target bisect
bisect_OBJECTS = \
"CMakeFiles/bisect.dir/zeroclasstest.cpp.o" \
"CMakeFiles/bisect.dir/zeroclasslib.cpp.o"

# External object files for target bisect
bisect_EXTERNAL_OBJECTS =

bisect: CMakeFiles/bisect.dir/zeroclasstest.cpp.o
bisect: CMakeFiles/bisect.dir/zeroclasslib.cpp.o
bisect: CMakeFiles/bisect.dir/build.make
bisect: CMakeFiles/bisect.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alozano0304/COE322/HW10build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable bisect"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bisect.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bisect.dir/build: bisect
.PHONY : CMakeFiles/bisect.dir/build

CMakeFiles/bisect.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bisect.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bisect.dir/clean

CMakeFiles/bisect.dir/depend:
	cd /home/alozano0304/COE322/HW10build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alozano0304/COE322/HW10 /home/alozano0304/COE322/HW10 /home/alozano0304/COE322/HW10build /home/alozano0304/COE322/HW10build /home/alozano0304/COE322/HW10build/CMakeFiles/bisect.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bisect.dir/depend

