# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/Uni/DataStructures/cmps231/code/04-rational

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Uni/DataStructures/cmps231/code/04-rational/build

# Include any dependencies generated for this target.
include CMakeFiles/rational-ui.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rational-ui.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rational-ui.dir/flags.make

CMakeFiles/rational-ui.dir/main.cpp.o: CMakeFiles/rational-ui.dir/flags.make
CMakeFiles/rational-ui.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Uni/DataStructures/cmps231/code/04-rational/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rational-ui.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rational-ui.dir/main.cpp.o -c /mnt/d/Uni/DataStructures/cmps231/code/04-rational/main.cpp

CMakeFiles/rational-ui.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rational-ui.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Uni/DataStructures/cmps231/code/04-rational/main.cpp > CMakeFiles/rational-ui.dir/main.cpp.i

CMakeFiles/rational-ui.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rational-ui.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Uni/DataStructures/cmps231/code/04-rational/main.cpp -o CMakeFiles/rational-ui.dir/main.cpp.s

CMakeFiles/rational-ui.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/rational-ui.dir/main.cpp.o.requires

CMakeFiles/rational-ui.dir/main.cpp.o.provides: CMakeFiles/rational-ui.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/rational-ui.dir/build.make CMakeFiles/rational-ui.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/rational-ui.dir/main.cpp.o.provides

CMakeFiles/rational-ui.dir/main.cpp.o.provides.build: CMakeFiles/rational-ui.dir/main.cpp.o


# Object files for target rational-ui
rational__ui_OBJECTS = \
"CMakeFiles/rational-ui.dir/main.cpp.o"

# External object files for target rational-ui
rational__ui_EXTERNAL_OBJECTS =

rational-ui: CMakeFiles/rational-ui.dir/main.cpp.o
rational-ui: CMakeFiles/rational-ui.dir/build.make
rational-ui: librational.a
rational-ui: CMakeFiles/rational-ui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Uni/DataStructures/cmps231/code/04-rational/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rational-ui"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rational-ui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rational-ui.dir/build: rational-ui

.PHONY : CMakeFiles/rational-ui.dir/build

CMakeFiles/rational-ui.dir/requires: CMakeFiles/rational-ui.dir/main.cpp.o.requires

.PHONY : CMakeFiles/rational-ui.dir/requires

CMakeFiles/rational-ui.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rational-ui.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rational-ui.dir/clean

CMakeFiles/rational-ui.dir/depend:
	cd /mnt/d/Uni/DataStructures/cmps231/code/04-rational/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Uni/DataStructures/cmps231/code/04-rational /mnt/d/Uni/DataStructures/cmps231/code/04-rational /mnt/d/Uni/DataStructures/cmps231/code/04-rational/build /mnt/d/Uni/DataStructures/cmps231/code/04-rational/build /mnt/d/Uni/DataStructures/cmps231/code/04-rational/build/CMakeFiles/rational-ui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rational-ui.dir/depend

