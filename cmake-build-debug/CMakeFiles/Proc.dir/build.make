# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Study\ProgrammTehnology\Lab1\Proc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Study\ProgrammTehnology\Lab1\Proc\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Proc.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Proc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Proc.dir/flags.make

CMakeFiles/Proc.dir/main.cpp.obj: CMakeFiles/Proc.dir/flags.make
CMakeFiles/Proc.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Study\ProgrammTehnology\Lab1\Proc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Proc.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Proc.dir\main.cpp.obj -c D:\Study\ProgrammTehnology\Lab1\Proc\main.cpp

CMakeFiles/Proc.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proc.dir/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Study\ProgrammTehnology\Lab1\Proc\main.cpp > CMakeFiles\Proc.dir\main.cpp.i

CMakeFiles/Proc.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proc.dir/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Study\ProgrammTehnology\Lab1\Proc\main.cpp -o CMakeFiles\Proc.dir\main.cpp.s

CMakeFiles/Proc.dir/container.cpp.obj: CMakeFiles/Proc.dir/flags.make
CMakeFiles/Proc.dir/container.cpp.obj: ../container.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Study\ProgrammTehnology\Lab1\Proc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Proc.dir/container.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Proc.dir\container.cpp.obj -c D:\Study\ProgrammTehnology\Lab1\Proc\container.cpp

CMakeFiles/Proc.dir/container.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proc.dir/container.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Study\ProgrammTehnology\Lab1\Proc\container.cpp > CMakeFiles\Proc.dir\container.cpp.i

CMakeFiles/Proc.dir/container.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proc.dir/container.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Study\ProgrammTehnology\Lab1\Proc\container.cpp -o CMakeFiles\Proc.dir\container.cpp.s

CMakeFiles/Proc.dir/text.cpp.obj: CMakeFiles/Proc.dir/flags.make
CMakeFiles/Proc.dir/text.cpp.obj: ../text.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Study\ProgrammTehnology\Lab1\Proc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Proc.dir/text.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Proc.dir\text.cpp.obj -c D:\Study\ProgrammTehnology\Lab1\Proc\text.cpp

CMakeFiles/Proc.dir/text.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proc.dir/text.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Study\ProgrammTehnology\Lab1\Proc\text.cpp > CMakeFiles\Proc.dir\text.cpp.i

CMakeFiles/Proc.dir/text.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proc.dir/text.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Study\ProgrammTehnology\Lab1\Proc\text.cpp -o CMakeFiles\Proc.dir\text.cpp.s

CMakeFiles/Proc.dir/shift.cpp.obj: CMakeFiles/Proc.dir/flags.make
CMakeFiles/Proc.dir/shift.cpp.obj: ../shift.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Study\ProgrammTehnology\Lab1\Proc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Proc.dir/shift.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Proc.dir\shift.cpp.obj -c D:\Study\ProgrammTehnology\Lab1\Proc\shift.cpp

CMakeFiles/Proc.dir/shift.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proc.dir/shift.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Study\ProgrammTehnology\Lab1\Proc\shift.cpp > CMakeFiles\Proc.dir\shift.cpp.i

CMakeFiles/Proc.dir/shift.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proc.dir/shift.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Study\ProgrammTehnology\Lab1\Proc\shift.cpp -o CMakeFiles\Proc.dir\shift.cpp.s

CMakeFiles/Proc.dir/replace.cpp.obj: CMakeFiles/Proc.dir/flags.make
CMakeFiles/Proc.dir/replace.cpp.obj: ../replace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Study\ProgrammTehnology\Lab1\Proc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Proc.dir/replace.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Proc.dir\replace.cpp.obj -c D:\Study\ProgrammTehnology\Lab1\Proc\replace.cpp

CMakeFiles/Proc.dir/replace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proc.dir/replace.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Study\ProgrammTehnology\Lab1\Proc\replace.cpp > CMakeFiles\Proc.dir\replace.cpp.i

CMakeFiles/Proc.dir/replace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proc.dir/replace.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Study\ProgrammTehnology\Lab1\Proc\replace.cpp -o CMakeFiles\Proc.dir\replace.cpp.s

# Object files for target Proc
Proc_OBJECTS = \
"CMakeFiles/Proc.dir/main.cpp.obj" \
"CMakeFiles/Proc.dir/container.cpp.obj" \
"CMakeFiles/Proc.dir/text.cpp.obj" \
"CMakeFiles/Proc.dir/shift.cpp.obj" \
"CMakeFiles/Proc.dir/replace.cpp.obj"

# External object files for target Proc
Proc_EXTERNAL_OBJECTS =

Proc.exe: CMakeFiles/Proc.dir/main.cpp.obj
Proc.exe: CMakeFiles/Proc.dir/container.cpp.obj
Proc.exe: CMakeFiles/Proc.dir/text.cpp.obj
Proc.exe: CMakeFiles/Proc.dir/shift.cpp.obj
Proc.exe: CMakeFiles/Proc.dir/replace.cpp.obj
Proc.exe: CMakeFiles/Proc.dir/build.make
Proc.exe: CMakeFiles/Proc.dir/linklibs.rsp
Proc.exe: CMakeFiles/Proc.dir/objects1.rsp
Proc.exe: CMakeFiles/Proc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Study\ProgrammTehnology\Lab1\Proc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Proc.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Proc.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Proc.dir/build: Proc.exe
.PHONY : CMakeFiles/Proc.dir/build

CMakeFiles/Proc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Proc.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Proc.dir/clean

CMakeFiles/Proc.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Study\ProgrammTehnology\Lab1\Proc D:\Study\ProgrammTehnology\Lab1\Proc D:\Study\ProgrammTehnology\Lab1\Proc\cmake-build-debug D:\Study\ProgrammTehnology\Lab1\Proc\cmake-build-debug D:\Study\ProgrammTehnology\Lab1\Proc\cmake-build-debug\CMakeFiles\Proc.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Proc.dir/depend

