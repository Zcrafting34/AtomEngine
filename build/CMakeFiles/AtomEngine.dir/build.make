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
CMAKE_SOURCE_DIR = /home/zcrafting/Documentos/workspace/projects-c/AtomEngine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zcrafting/Documentos/workspace/projects-c/AtomEngine/build

# Include any dependencies generated for this target.
include CMakeFiles/AtomEngine.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/AtomEngine.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/AtomEngine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AtomEngine.dir/flags.make

CMakeFiles/AtomEngine.dir/src/main.cpp.o: CMakeFiles/AtomEngine.dir/flags.make
CMakeFiles/AtomEngine.dir/src/main.cpp.o: /home/zcrafting/Documentos/workspace/projects-c/AtomEngine/src/main.cpp
CMakeFiles/AtomEngine.dir/src/main.cpp.o: CMakeFiles/AtomEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/zcrafting/Documentos/workspace/projects-c/AtomEngine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AtomEngine.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AtomEngine.dir/src/main.cpp.o -MF CMakeFiles/AtomEngine.dir/src/main.cpp.o.d -o CMakeFiles/AtomEngine.dir/src/main.cpp.o -c /home/zcrafting/Documentos/workspace/projects-c/AtomEngine/src/main.cpp

CMakeFiles/AtomEngine.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/AtomEngine.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zcrafting/Documentos/workspace/projects-c/AtomEngine/src/main.cpp > CMakeFiles/AtomEngine.dir/src/main.cpp.i

CMakeFiles/AtomEngine.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/AtomEngine.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zcrafting/Documentos/workspace/projects-c/AtomEngine/src/main.cpp -o CMakeFiles/AtomEngine.dir/src/main.cpp.s

CMakeFiles/AtomEngine.dir/src/core/Window.cpp.o: CMakeFiles/AtomEngine.dir/flags.make
CMakeFiles/AtomEngine.dir/src/core/Window.cpp.o: /home/zcrafting/Documentos/workspace/projects-c/AtomEngine/src/core/Window.cpp
CMakeFiles/AtomEngine.dir/src/core/Window.cpp.o: CMakeFiles/AtomEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/zcrafting/Documentos/workspace/projects-c/AtomEngine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/AtomEngine.dir/src/core/Window.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AtomEngine.dir/src/core/Window.cpp.o -MF CMakeFiles/AtomEngine.dir/src/core/Window.cpp.o.d -o CMakeFiles/AtomEngine.dir/src/core/Window.cpp.o -c /home/zcrafting/Documentos/workspace/projects-c/AtomEngine/src/core/Window.cpp

CMakeFiles/AtomEngine.dir/src/core/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/AtomEngine.dir/src/core/Window.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zcrafting/Documentos/workspace/projects-c/AtomEngine/src/core/Window.cpp > CMakeFiles/AtomEngine.dir/src/core/Window.cpp.i

CMakeFiles/AtomEngine.dir/src/core/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/AtomEngine.dir/src/core/Window.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zcrafting/Documentos/workspace/projects-c/AtomEngine/src/core/Window.cpp -o CMakeFiles/AtomEngine.dir/src/core/Window.cpp.s

# Object files for target AtomEngine
AtomEngine_OBJECTS = \
"CMakeFiles/AtomEngine.dir/src/main.cpp.o" \
"CMakeFiles/AtomEngine.dir/src/core/Window.cpp.o"

# External object files for target AtomEngine
AtomEngine_EXTERNAL_OBJECTS =

AtomEngine: CMakeFiles/AtomEngine.dir/src/main.cpp.o
AtomEngine: CMakeFiles/AtomEngine.dir/src/core/Window.cpp.o
AtomEngine: CMakeFiles/AtomEngine.dir/build.make
AtomEngine: /usr/lib64/libSDL2main.a
AtomEngine: /usr/lib64/libSDL2-2.0.so.0.3000.3
AtomEngine: CMakeFiles/AtomEngine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/zcrafting/Documentos/workspace/projects-c/AtomEngine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable AtomEngine"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AtomEngine.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AtomEngine.dir/build: AtomEngine
.PHONY : CMakeFiles/AtomEngine.dir/build

CMakeFiles/AtomEngine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AtomEngine.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AtomEngine.dir/clean

CMakeFiles/AtomEngine.dir/depend:
	cd /home/zcrafting/Documentos/workspace/projects-c/AtomEngine/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zcrafting/Documentos/workspace/projects-c/AtomEngine /home/zcrafting/Documentos/workspace/projects-c/AtomEngine /home/zcrafting/Documentos/workspace/projects-c/AtomEngine/build /home/zcrafting/Documentos/workspace/projects-c/AtomEngine/build /home/zcrafting/Documentos/workspace/projects-c/AtomEngine/build/CMakeFiles/AtomEngine.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/AtomEngine.dir/depend

