# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/gleb/vs_code/oop/laba1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gleb/vs_code/oop/laba1/build

# Include any dependencies generated for this target.
include CMakeFiles/laba1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/laba1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/laba1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/laba1.dir/flags.make

CMakeFiles/laba1.dir/src/main.cpp.o: CMakeFiles/laba1.dir/flags.make
CMakeFiles/laba1.dir/src/main.cpp.o: /home/gleb/vs_code/oop/laba1/src/main.cpp
CMakeFiles/laba1.dir/src/main.cpp.o: CMakeFiles/laba1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/gleb/vs_code/oop/laba1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/laba1.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/laba1.dir/src/main.cpp.o -MF CMakeFiles/laba1.dir/src/main.cpp.o.d -o CMakeFiles/laba1.dir/src/main.cpp.o -c /home/gleb/vs_code/oop/laba1/src/main.cpp

CMakeFiles/laba1.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/laba1.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gleb/vs_code/oop/laba1/src/main.cpp > CMakeFiles/laba1.dir/src/main.cpp.i

CMakeFiles/laba1.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/laba1.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gleb/vs_code/oop/laba1/src/main.cpp -o CMakeFiles/laba1.dir/src/main.cpp.s

# Object files for target laba1
laba1_OBJECTS = \
"CMakeFiles/laba1.dir/src/main.cpp.o"

# External object files for target laba1
laba1_EXTERNAL_OBJECTS =

laba1: CMakeFiles/laba1.dir/src/main.cpp.o
laba1: CMakeFiles/laba1.dir/build.make
laba1: CMakeFiles/laba1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/gleb/vs_code/oop/laba1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable laba1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/laba1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/laba1.dir/build: laba1
.PHONY : CMakeFiles/laba1.dir/build

CMakeFiles/laba1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/laba1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/laba1.dir/clean

CMakeFiles/laba1.dir/depend:
	cd /home/gleb/vs_code/oop/laba1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gleb/vs_code/oop/laba1 /home/gleb/vs_code/oop/laba1 /home/gleb/vs_code/oop/laba1/build /home/gleb/vs_code/oop/laba1/build /home/gleb/vs_code/oop/laba1/build/CMakeFiles/laba1.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/laba1.dir/depend
