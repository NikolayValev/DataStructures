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
CMAKE_SOURCE_DIR = /mnt/d/Uni/DataStructures/cmps231/code/03-tdd-order-classification-catch

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Uni/DataStructures/cmps231/code/03-tdd-order-classification-catch/build

# Include any dependencies generated for this target.
include CMakeFiles/classify-ui.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/classify-ui.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/classify-ui.dir/flags.make

CMakeFiles/classify-ui.dir/main.cpp.o: CMakeFiles/classify-ui.dir/flags.make
CMakeFiles/classify-ui.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Uni/DataStructures/cmps231/code/03-tdd-order-classification-catch/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/classify-ui.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/classify-ui.dir/main.cpp.o -c /mnt/d/Uni/DataStructures/cmps231/code/03-tdd-order-classification-catch/main.cpp

CMakeFiles/classify-ui.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/classify-ui.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Uni/DataStructures/cmps231/code/03-tdd-order-classification-catch/main.cpp > CMakeFiles/classify-ui.dir/main.cpp.i

CMakeFiles/classify-ui.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/classify-ui.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Uni/DataStructures/cmps231/code/03-tdd-order-classification-catch/main.cpp -o CMakeFiles/classify-ui.dir/main.cpp.s

CMakeFiles/classify-ui.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/classify-ui.dir/main.cpp.o.requires

CMakeFiles/classify-ui.dir/main.cpp.o.provides: CMakeFiles/classify-ui.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/classify-ui.dir/build.make CMakeFiles/classify-ui.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/classify-ui.dir/main.cpp.o.provides

CMakeFiles/classify-ui.dir/main.cpp.o.provides.build: CMakeFiles/classify-ui.dir/main.cpp.o


# Object files for target classify-ui
classify__ui_OBJECTS = \
"CMakeFiles/classify-ui.dir/main.cpp.o"

# External object files for target classify-ui
classify__ui_EXTERNAL_OBJECTS =

classify-ui: CMakeFiles/classify-ui.dir/main.cpp.o
classify-ui: CMakeFiles/classify-ui.dir/build.make
classify-ui: libclassify.a
classify-ui: CMakeFiles/classify-ui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Uni/DataStructures/cmps231/code/03-tdd-order-classification-catch/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable classify-ui"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/classify-ui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/classify-ui.dir/build: classify-ui

.PHONY : CMakeFiles/classify-ui.dir/build

CMakeFiles/classify-ui.dir/requires: CMakeFiles/classify-ui.dir/main.cpp.o.requires

.PHONY : CMakeFiles/classify-ui.dir/requires

CMakeFiles/classify-ui.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/classify-ui.dir/cmake_clean.cmake
.PHONY : CMakeFiles/classify-ui.dir/clean

CMakeFiles/classify-ui.dir/depend:
	cd /mnt/d/Uni/DataStructures/cmps231/code/03-tdd-order-classification-catch/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Uni/DataStructures/cmps231/code/03-tdd-order-classification-catch /mnt/d/Uni/DataStructures/cmps231/code/03-tdd-order-classification-catch /mnt/d/Uni/DataStructures/cmps231/code/03-tdd-order-classification-catch/build /mnt/d/Uni/DataStructures/cmps231/code/03-tdd-order-classification-catch/build /mnt/d/Uni/DataStructures/cmps231/code/03-tdd-order-classification-catch/build/CMakeFiles/classify-ui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/classify-ui.dir/depend

