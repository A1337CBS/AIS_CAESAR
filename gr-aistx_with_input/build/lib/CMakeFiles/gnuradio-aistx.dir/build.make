# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build

# Include any dependencies generated for this target.
include lib/CMakeFiles/gnuradio-aistx.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/gnuradio-aistx.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/gnuradio-aistx.dir/flags.make

lib/CMakeFiles/gnuradio-aistx.dir/Build_Frame_From_Input_impl.cc.o: lib/CMakeFiles/gnuradio-aistx.dir/flags.make
lib/CMakeFiles/gnuradio-aistx.dir/Build_Frame_From_Input_impl.cc.o: ../lib/Build_Frame_From_Input_impl.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/gnuradio-aistx.dir/Build_Frame_From_Input_impl.cc.o"
	cd /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gnuradio-aistx.dir/Build_Frame_From_Input_impl.cc.o -c /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/lib/Build_Frame_From_Input_impl.cc

lib/CMakeFiles/gnuradio-aistx.dir/Build_Frame_From_Input_impl.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gnuradio-aistx.dir/Build_Frame_From_Input_impl.cc.i"
	cd /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/lib/Build_Frame_From_Input_impl.cc > CMakeFiles/gnuradio-aistx.dir/Build_Frame_From_Input_impl.cc.i

lib/CMakeFiles/gnuradio-aistx.dir/Build_Frame_From_Input_impl.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gnuradio-aistx.dir/Build_Frame_From_Input_impl.cc.s"
	cd /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/lib/Build_Frame_From_Input_impl.cc -o CMakeFiles/gnuradio-aistx.dir/Build_Frame_From_Input_impl.cc.s

# Object files for target gnuradio-aistx
gnuradio__aistx_OBJECTS = \
"CMakeFiles/gnuradio-aistx.dir/Build_Frame_From_Input_impl.cc.o"

# External object files for target gnuradio-aistx
gnuradio__aistx_EXTERNAL_OBJECTS =

lib/libgnuradio-aistx-1.0.0git.so.0.0.0: lib/CMakeFiles/gnuradio-aistx.dir/Build_Frame_From_Input_impl.cc.o
lib/libgnuradio-aistx-1.0.0git.so.0.0.0: lib/CMakeFiles/gnuradio-aistx.dir/build.make
lib/libgnuradio-aistx-1.0.0git.so.0.0.0: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
lib/libgnuradio-aistx-1.0.0git.so.0.0.0: /usr/lib/x86_64-linux-gnu/libboost_system.so
lib/libgnuradio-aistx-1.0.0git.so.0.0.0: /home/ahmad/gnuradio/lib/libgnuradio-runtime.so
lib/libgnuradio-aistx-1.0.0git.so.0.0.0: /home/ahmad/gnuradio/lib/libgnuradio-pmt.so
lib/libgnuradio-aistx-1.0.0git.so.0.0.0: /usr/lib/x86_64-linux-gnu/liblog4cpp.so
lib/libgnuradio-aistx-1.0.0git.so.0.0.0: lib/CMakeFiles/gnuradio-aistx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libgnuradio-aistx-1.0.0git.so"
	cd /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gnuradio-aistx.dir/link.txt --verbose=$(VERBOSE)
	cd /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build/lib && $(CMAKE_COMMAND) -E cmake_symlink_library libgnuradio-aistx-1.0.0git.so.0.0.0 libgnuradio-aistx-1.0.0git.so.0.0.0 libgnuradio-aistx-1.0.0git.so
	cd /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build/lib && /usr/bin/cmake -E create_symlink libgnuradio-aistx-1.0.0git.so.0.0.0 /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build/lib/libgnuradio-aistx.so
	cd /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build/lib && /usr/bin/cmake -E create_symlink libgnuradio-aistx-1.0.0git.so.0.0.0 /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build/lib/libgnuradio-aistx-1.0.0git.so.0
	cd /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build/lib && /usr/bin/cmake -E touch libgnuradio-aistx-1.0.0git.so.0.0.0

lib/libgnuradio-aistx-1.0.0git.so: lib/libgnuradio-aistx-1.0.0git.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libgnuradio-aistx-1.0.0git.so

# Rule to build all files generated by this target.
lib/CMakeFiles/gnuradio-aistx.dir/build: lib/libgnuradio-aistx-1.0.0git.so

.PHONY : lib/CMakeFiles/gnuradio-aistx.dir/build

lib/CMakeFiles/gnuradio-aistx.dir/clean:
	cd /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/gnuradio-aistx.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/gnuradio-aistx.dir/clean

lib/CMakeFiles/gnuradio-aistx.dir/depend:
	cd /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/lib /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build/lib /home/ahmad/Documents/GRC/Implementation/Code/AIS_Security_Protocol/gr-aistx_with_input/build/lib/CMakeFiles/gnuradio-aistx.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/gnuradio-aistx.dir/depend

