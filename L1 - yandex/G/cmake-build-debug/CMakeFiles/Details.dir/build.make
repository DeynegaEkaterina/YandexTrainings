# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /app/extra/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /app/extra/clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/ekaterina/CLionProjects/L1 - yandex/Details"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ekaterina/CLionProjects/L1 - yandex/Details/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Details.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Details.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Details.dir/flags.make

CMakeFiles/Details.dir/main.cpp.o: CMakeFiles/Details.dir/flags.make
CMakeFiles/Details.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ekaterina/CLionProjects/L1 - yandex/Details/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Details.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Details.dir/main.cpp.o -c "/home/ekaterina/CLionProjects/L1 - yandex/Details/main.cpp"

CMakeFiles/Details.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Details.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ekaterina/CLionProjects/L1 - yandex/Details/main.cpp" > CMakeFiles/Details.dir/main.cpp.i

CMakeFiles/Details.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Details.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ekaterina/CLionProjects/L1 - yandex/Details/main.cpp" -o CMakeFiles/Details.dir/main.cpp.s

# Object files for target Details
Details_OBJECTS = \
"CMakeFiles/Details.dir/main.cpp.o"

# External object files for target Details
Details_EXTERNAL_OBJECTS =

Details: CMakeFiles/Details.dir/main.cpp.o
Details: CMakeFiles/Details.dir/build.make
Details: CMakeFiles/Details.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ekaterina/CLionProjects/L1 - yandex/Details/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Details"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Details.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Details.dir/build: Details

.PHONY : CMakeFiles/Details.dir/build

CMakeFiles/Details.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Details.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Details.dir/clean

CMakeFiles/Details.dir/depend:
	cd "/home/ekaterina/CLionProjects/L1 - yandex/Details/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ekaterina/CLionProjects/L1 - yandex/Details" "/home/ekaterina/CLionProjects/L1 - yandex/Details" "/home/ekaterina/CLionProjects/L1 - yandex/Details/cmake-build-debug" "/home/ekaterina/CLionProjects/L1 - yandex/Details/cmake-build-debug" "/home/ekaterina/CLionProjects/L1 - yandex/Details/cmake-build-debug/CMakeFiles/Details.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Details.dir/depend
