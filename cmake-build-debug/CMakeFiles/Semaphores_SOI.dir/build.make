# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /opt/clion-2020.1.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2020.1.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adam/CLionProjects/Semaphores_SOI

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adam/CLionProjects/Semaphores_SOI/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Semaphores_SOI.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Semaphores_SOI.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Semaphores_SOI.dir/flags.make

CMakeFiles/Semaphores_SOI.dir/main.cpp.o: CMakeFiles/Semaphores_SOI.dir/flags.make
CMakeFiles/Semaphores_SOI.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adam/CLionProjects/Semaphores_SOI/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Semaphores_SOI.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Semaphores_SOI.dir/main.cpp.o -c /home/adam/CLionProjects/Semaphores_SOI/main.cpp

CMakeFiles/Semaphores_SOI.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Semaphores_SOI.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adam/CLionProjects/Semaphores_SOI/main.cpp > CMakeFiles/Semaphores_SOI.dir/main.cpp.i

CMakeFiles/Semaphores_SOI.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Semaphores_SOI.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adam/CLionProjects/Semaphores_SOI/main.cpp -o CMakeFiles/Semaphores_SOI.dir/main.cpp.s

CMakeFiles/Semaphores_SOI.dir/fifo.cpp.o: CMakeFiles/Semaphores_SOI.dir/flags.make
CMakeFiles/Semaphores_SOI.dir/fifo.cpp.o: ../fifo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adam/CLionProjects/Semaphores_SOI/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Semaphores_SOI.dir/fifo.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Semaphores_SOI.dir/fifo.cpp.o -c /home/adam/CLionProjects/Semaphores_SOI/fifo.cpp

CMakeFiles/Semaphores_SOI.dir/fifo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Semaphores_SOI.dir/fifo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adam/CLionProjects/Semaphores_SOI/fifo.cpp > CMakeFiles/Semaphores_SOI.dir/fifo.cpp.i

CMakeFiles/Semaphores_SOI.dir/fifo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Semaphores_SOI.dir/fifo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adam/CLionProjects/Semaphores_SOI/fifo.cpp -o CMakeFiles/Semaphores_SOI.dir/fifo.cpp.s

CMakeFiles/Semaphores_SOI.dir/test.cpp.o: CMakeFiles/Semaphores_SOI.dir/flags.make
CMakeFiles/Semaphores_SOI.dir/test.cpp.o: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adam/CLionProjects/Semaphores_SOI/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Semaphores_SOI.dir/test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Semaphores_SOI.dir/test.cpp.o -c /home/adam/CLionProjects/Semaphores_SOI/test.cpp

CMakeFiles/Semaphores_SOI.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Semaphores_SOI.dir/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adam/CLionProjects/Semaphores_SOI/test.cpp > CMakeFiles/Semaphores_SOI.dir/test.cpp.i

CMakeFiles/Semaphores_SOI.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Semaphores_SOI.dir/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adam/CLionProjects/Semaphores_SOI/test.cpp -o CMakeFiles/Semaphores_SOI.dir/test.cpp.s

# Object files for target Semaphores_SOI
Semaphores_SOI_OBJECTS = \
"CMakeFiles/Semaphores_SOI.dir/main.cpp.o" \
"CMakeFiles/Semaphores_SOI.dir/fifo.cpp.o" \
"CMakeFiles/Semaphores_SOI.dir/test.cpp.o"

# External object files for target Semaphores_SOI
Semaphores_SOI_EXTERNAL_OBJECTS =

Semaphores_SOI: CMakeFiles/Semaphores_SOI.dir/main.cpp.o
Semaphores_SOI: CMakeFiles/Semaphores_SOI.dir/fifo.cpp.o
Semaphores_SOI: CMakeFiles/Semaphores_SOI.dir/test.cpp.o
Semaphores_SOI: CMakeFiles/Semaphores_SOI.dir/build.make
Semaphores_SOI: CMakeFiles/Semaphores_SOI.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adam/CLionProjects/Semaphores_SOI/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Semaphores_SOI"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Semaphores_SOI.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Semaphores_SOI.dir/build: Semaphores_SOI

.PHONY : CMakeFiles/Semaphores_SOI.dir/build

CMakeFiles/Semaphores_SOI.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Semaphores_SOI.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Semaphores_SOI.dir/clean

CMakeFiles/Semaphores_SOI.dir/depend:
	cd /home/adam/CLionProjects/Semaphores_SOI/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adam/CLionProjects/Semaphores_SOI /home/adam/CLionProjects/Semaphores_SOI /home/adam/CLionProjects/Semaphores_SOI/cmake-build-debug /home/adam/CLionProjects/Semaphores_SOI/cmake-build-debug /home/adam/CLionProjects/Semaphores_SOI/cmake-build-debug/CMakeFiles/Semaphores_SOI.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Semaphores_SOI.dir/depend

