# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = "/home/appuser/Data/ESERCITAZIONI/Esercitazione 2/1803"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/appuser/Data/ESERCITAZIONI/Esercitazione 2/1803/Debug"

# Include any dependencies generated for this target.
include CMakeFiles/rational.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/rational.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/rational.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rational.dir/flags.make

CMakeFiles/rational.dir/rational.cpp.o: CMakeFiles/rational.dir/flags.make
CMakeFiles/rational.dir/rational.cpp.o: ../rational.cpp
CMakeFiles/rational.dir/rational.cpp.o: CMakeFiles/rational.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/appuser/Data/ESERCITAZIONI/Esercitazione 2/1803/Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rational.dir/rational.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/rational.dir/rational.cpp.o -MF CMakeFiles/rational.dir/rational.cpp.o.d -o CMakeFiles/rational.dir/rational.cpp.o -c "/home/appuser/Data/ESERCITAZIONI/Esercitazione 2/1803/rational.cpp"

CMakeFiles/rational.dir/rational.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rational.dir/rational.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/appuser/Data/ESERCITAZIONI/Esercitazione 2/1803/rational.cpp" > CMakeFiles/rational.dir/rational.cpp.i

CMakeFiles/rational.dir/rational.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rational.dir/rational.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/appuser/Data/ESERCITAZIONI/Esercitazione 2/1803/rational.cpp" -o CMakeFiles/rational.dir/rational.cpp.s

# Object files for target rational
rational_OBJECTS = \
"CMakeFiles/rational.dir/rational.cpp.o"

# External object files for target rational
rational_EXTERNAL_OBJECTS =

rational: CMakeFiles/rational.dir/rational.cpp.o
rational: CMakeFiles/rational.dir/build.make
rational: CMakeFiles/rational.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/appuser/Data/ESERCITAZIONI/Esercitazione 2/1803/Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rational"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rational.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rational.dir/build: rational
.PHONY : CMakeFiles/rational.dir/build

CMakeFiles/rational.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rational.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rational.dir/clean

CMakeFiles/rational.dir/depend:
	cd "/home/appuser/Data/ESERCITAZIONI/Esercitazione 2/1803/Debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/appuser/Data/ESERCITAZIONI/Esercitazione 2/1803" "/home/appuser/Data/ESERCITAZIONI/Esercitazione 2/1803" "/home/appuser/Data/ESERCITAZIONI/Esercitazione 2/1803/Debug" "/home/appuser/Data/ESERCITAZIONI/Esercitazione 2/1803/Debug" "/home/appuser/Data/ESERCITAZIONI/Esercitazione 2/1803/Debug/CMakeFiles/rational.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/rational.dir/depend

