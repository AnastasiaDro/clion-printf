# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/anastasia/CLionProjects/clion-printf

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/anastasia/CLionProjects/clion-printf/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ft_printf_clion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ft_printf_clion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ft_printf_clion.dir/flags.make

CMakeFiles/ft_printf_clion.dir/test_main.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/test_main.c.o: ../test_main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ft_printf_clion.dir/test_main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/test_main.c.o   -c /Users/anastasia/CLionProjects/clion-printf/test_main.c

CMakeFiles/ft_printf_clion.dir/test_main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/test_main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/test_main.c > CMakeFiles/ft_printf_clion.dir/test_main.c.i

CMakeFiles/ft_printf_clion.dir/test_main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/test_main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/test_main.c -o CMakeFiles/ft_printf_clion.dir/test_main.c.s

CMakeFiles/ft_printf_clion.dir/ft_make_parse.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/ft_make_parse.c.o: ../ft_make_parse.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ft_printf_clion.dir/ft_make_parse.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/ft_make_parse.c.o   -c /Users/anastasia/CLionProjects/clion-printf/ft_make_parse.c

CMakeFiles/ft_printf_clion.dir/ft_make_parse.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/ft_make_parse.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/ft_make_parse.c > CMakeFiles/ft_printf_clion.dir/ft_make_parse.c.i

CMakeFiles/ft_printf_clion.dir/ft_make_parse.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/ft_make_parse.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/ft_make_parse.c -o CMakeFiles/ft_printf_clion.dir/ft_make_parse.c.s

CMakeFiles/ft_printf_clion.dir/ft_num_utils.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/ft_num_utils.c.o: ../ft_num_utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/ft_printf_clion.dir/ft_num_utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/ft_num_utils.c.o   -c /Users/anastasia/CLionProjects/clion-printf/ft_num_utils.c

CMakeFiles/ft_printf_clion.dir/ft_num_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/ft_num_utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/ft_num_utils.c > CMakeFiles/ft_printf_clion.dir/ft_num_utils.c.i

CMakeFiles/ft_printf_clion.dir/ft_num_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/ft_num_utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/ft_num_utils.c -o CMakeFiles/ft_printf_clion.dir/ft_num_utils.c.s

CMakeFiles/ft_printf_clion.dir/ft_print_utils.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/ft_print_utils.c.o: ../ft_print_utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/ft_printf_clion.dir/ft_print_utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/ft_print_utils.c.o   -c /Users/anastasia/CLionProjects/clion-printf/ft_print_utils.c

CMakeFiles/ft_printf_clion.dir/ft_print_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/ft_print_utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/ft_print_utils.c > CMakeFiles/ft_printf_clion.dir/ft_print_utils.c.i

CMakeFiles/ft_printf_clion.dir/ft_print_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/ft_print_utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/ft_print_utils.c -o CMakeFiles/ft_printf_clion.dir/ft_print_utils.c.s

CMakeFiles/ft_printf_clion.dir/ft_printf.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/ft_printf.c.o: ../ft_printf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/ft_printf_clion.dir/ft_printf.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/ft_printf.c.o   -c /Users/anastasia/CLionProjects/clion-printf/ft_printf.c

CMakeFiles/ft_printf_clion.dir/ft_printf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/ft_printf.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/ft_printf.c > CMakeFiles/ft_printf_clion.dir/ft_printf.c.i

CMakeFiles/ft_printf_clion.dir/ft_printf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/ft_printf.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/ft_printf.c -o CMakeFiles/ft_printf_clion.dir/ft_printf.c.s

CMakeFiles/ft_printf_clion.dir/ft_printf_utils.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/ft_printf_utils.c.o: ../ft_printf_utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/ft_printf_clion.dir/ft_printf_utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/ft_printf_utils.c.o   -c /Users/anastasia/CLionProjects/clion-printf/ft_printf_utils.c

CMakeFiles/ft_printf_clion.dir/ft_printf_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/ft_printf_utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/ft_printf_utils.c > CMakeFiles/ft_printf_clion.dir/ft_printf_utils.c.i

CMakeFiles/ft_printf_clion.dir/ft_printf_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/ft_printf_utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/ft_printf_utils.c -o CMakeFiles/ft_printf_clion.dir/ft_printf_utils.c.s

CMakeFiles/ft_printf_clion.dir/parse_nums_funcs.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/parse_nums_funcs.c.o: ../parse_nums_funcs.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/ft_printf_clion.dir/parse_nums_funcs.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/parse_nums_funcs.c.o   -c /Users/anastasia/CLionProjects/clion-printf/parse_nums_funcs.c

CMakeFiles/ft_printf_clion.dir/parse_nums_funcs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/parse_nums_funcs.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/parse_nums_funcs.c > CMakeFiles/ft_printf_clion.dir/parse_nums_funcs.c.i

CMakeFiles/ft_printf_clion.dir/parse_nums_funcs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/parse_nums_funcs.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/parse_nums_funcs.c -o CMakeFiles/ft_printf_clion.dir/parse_nums_funcs.c.s

CMakeFiles/ft_printf_clion.dir/get_width_precis.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/get_width_precis.c.o: ../get_width_precis.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/ft_printf_clion.dir/get_width_precis.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/get_width_precis.c.o   -c /Users/anastasia/CLionProjects/clion-printf/get_width_precis.c

CMakeFiles/ft_printf_clion.dir/get_width_precis.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/get_width_precis.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/get_width_precis.c > CMakeFiles/ft_printf_clion.dir/get_width_precis.c.i

CMakeFiles/ft_printf_clion.dir/get_width_precis.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/get_width_precis.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/get_width_precis.c -o CMakeFiles/ft_printf_clion.dir/get_width_precis.c.s

CMakeFiles/ft_printf_clion.dir/add_x_num_utils.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/add_x_num_utils.c.o: ../add_x_num_utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/ft_printf_clion.dir/add_x_num_utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/add_x_num_utils.c.o   -c /Users/anastasia/CLionProjects/clion-printf/add_x_num_utils.c

CMakeFiles/ft_printf_clion.dir/add_x_num_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/add_x_num_utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/add_x_num_utils.c > CMakeFiles/ft_printf_clion.dir/add_x_num_utils.c.i

CMakeFiles/ft_printf_clion.dir/add_x_num_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/add_x_num_utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/add_x_num_utils.c -o CMakeFiles/ft_printf_clion.dir/add_x_num_utils.c.s

CMakeFiles/ft_printf_clion.dir/libft/ft_atoi.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/libft/ft_atoi.c.o: ../libft/ft_atoi.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/ft_printf_clion.dir/libft/ft_atoi.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/libft/ft_atoi.c.o   -c /Users/anastasia/CLionProjects/clion-printf/libft/ft_atoi.c

CMakeFiles/ft_printf_clion.dir/libft/ft_atoi.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/libft/ft_atoi.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/libft/ft_atoi.c > CMakeFiles/ft_printf_clion.dir/libft/ft_atoi.c.i

CMakeFiles/ft_printf_clion.dir/libft/ft_atoi.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/libft/ft_atoi.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/libft/ft_atoi.c -o CMakeFiles/ft_printf_clion.dir/libft/ft_atoi.c.s

CMakeFiles/ft_printf_clion.dir/libft/ft_itoa.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/libft/ft_itoa.c.o: ../libft/ft_itoa.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/ft_printf_clion.dir/libft/ft_itoa.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/libft/ft_itoa.c.o   -c /Users/anastasia/CLionProjects/clion-printf/libft/ft_itoa.c

CMakeFiles/ft_printf_clion.dir/libft/ft_itoa.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/libft/ft_itoa.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/libft/ft_itoa.c > CMakeFiles/ft_printf_clion.dir/libft/ft_itoa.c.i

CMakeFiles/ft_printf_clion.dir/libft/ft_itoa.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/libft/ft_itoa.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/libft/ft_itoa.c -o CMakeFiles/ft_printf_clion.dir/libft/ft_itoa.c.s

CMakeFiles/ft_printf_clion.dir/libft/ft_calloc.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/libft/ft_calloc.c.o: ../libft/ft_calloc.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/ft_printf_clion.dir/libft/ft_calloc.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/libft/ft_calloc.c.o   -c /Users/anastasia/CLionProjects/clion-printf/libft/ft_calloc.c

CMakeFiles/ft_printf_clion.dir/libft/ft_calloc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/libft/ft_calloc.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/libft/ft_calloc.c > CMakeFiles/ft_printf_clion.dir/libft/ft_calloc.c.i

CMakeFiles/ft_printf_clion.dir/libft/ft_calloc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/libft/ft_calloc.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/libft/ft_calloc.c -o CMakeFiles/ft_printf_clion.dir/libft/ft_calloc.c.s

CMakeFiles/ft_printf_clion.dir/libft/ft_bzero.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/libft/ft_bzero.c.o: ../libft/ft_bzero.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/ft_printf_clion.dir/libft/ft_bzero.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/libft/ft_bzero.c.o   -c /Users/anastasia/CLionProjects/clion-printf/libft/ft_bzero.c

CMakeFiles/ft_printf_clion.dir/libft/ft_bzero.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/libft/ft_bzero.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/libft/ft_bzero.c > CMakeFiles/ft_printf_clion.dir/libft/ft_bzero.c.i

CMakeFiles/ft_printf_clion.dir/libft/ft_bzero.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/libft/ft_bzero.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/libft/ft_bzero.c -o CMakeFiles/ft_printf_clion.dir/libft/ft_bzero.c.s

CMakeFiles/ft_printf_clion.dir/libft/ft_strlen.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/libft/ft_strlen.c.o: ../libft/ft_strlen.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/ft_printf_clion.dir/libft/ft_strlen.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/libft/ft_strlen.c.o   -c /Users/anastasia/CLionProjects/clion-printf/libft/ft_strlen.c

CMakeFiles/ft_printf_clion.dir/libft/ft_strlen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/libft/ft_strlen.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/libft/ft_strlen.c > CMakeFiles/ft_printf_clion.dir/libft/ft_strlen.c.i

CMakeFiles/ft_printf_clion.dir/libft/ft_strlen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/libft/ft_strlen.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/libft/ft_strlen.c -o CMakeFiles/ft_printf_clion.dir/libft/ft_strlen.c.s

CMakeFiles/ft_printf_clion.dir/libft/ft_strlcpy.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/libft/ft_strlcpy.c.o: ../libft/ft_strlcpy.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/ft_printf_clion.dir/libft/ft_strlcpy.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/libft/ft_strlcpy.c.o   -c /Users/anastasia/CLionProjects/clion-printf/libft/ft_strlcpy.c

CMakeFiles/ft_printf_clion.dir/libft/ft_strlcpy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/libft/ft_strlcpy.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/libft/ft_strlcpy.c > CMakeFiles/ft_printf_clion.dir/libft/ft_strlcpy.c.i

CMakeFiles/ft_printf_clion.dir/libft/ft_strlcpy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/libft/ft_strlcpy.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/libft/ft_strlcpy.c -o CMakeFiles/ft_printf_clion.dir/libft/ft_strlcpy.c.s

CMakeFiles/ft_printf_clion.dir/libft/ft_putchar_fd.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/libft/ft_putchar_fd.c.o: ../libft/ft_putchar_fd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/ft_printf_clion.dir/libft/ft_putchar_fd.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/libft/ft_putchar_fd.c.o   -c /Users/anastasia/CLionProjects/clion-printf/libft/ft_putchar_fd.c

CMakeFiles/ft_printf_clion.dir/libft/ft_putchar_fd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/libft/ft_putchar_fd.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/anastasia/CLionProjects/clion-printf/libft/ft_putchar_fd.c > CMakeFiles/ft_printf_clion.dir/libft/ft_putchar_fd.c.i

CMakeFiles/ft_printf_clion.dir/libft/ft_putchar_fd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/libft/ft_putchar_fd.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/anastasia/CLionProjects/clion-printf/libft/ft_putchar_fd.c -o CMakeFiles/ft_printf_clion.dir/libft/ft_putchar_fd.c.s

# Object files for target ft_printf_clion
ft_printf_clion_OBJECTS = \
"CMakeFiles/ft_printf_clion.dir/test_main.c.o" \
"CMakeFiles/ft_printf_clion.dir/ft_make_parse.c.o" \
"CMakeFiles/ft_printf_clion.dir/ft_num_utils.c.o" \
"CMakeFiles/ft_printf_clion.dir/ft_print_utils.c.o" \
"CMakeFiles/ft_printf_clion.dir/ft_printf.c.o" \
"CMakeFiles/ft_printf_clion.dir/ft_printf_utils.c.o" \
"CMakeFiles/ft_printf_clion.dir/parse_nums_funcs.c.o" \
"CMakeFiles/ft_printf_clion.dir/get_width_precis.c.o" \
"CMakeFiles/ft_printf_clion.dir/add_x_num_utils.c.o" \
"CMakeFiles/ft_printf_clion.dir/libft/ft_atoi.c.o" \
"CMakeFiles/ft_printf_clion.dir/libft/ft_itoa.c.o" \
"CMakeFiles/ft_printf_clion.dir/libft/ft_calloc.c.o" \
"CMakeFiles/ft_printf_clion.dir/libft/ft_bzero.c.o" \
"CMakeFiles/ft_printf_clion.dir/libft/ft_strlen.c.o" \
"CMakeFiles/ft_printf_clion.dir/libft/ft_strlcpy.c.o" \
"CMakeFiles/ft_printf_clion.dir/libft/ft_putchar_fd.c.o"

# External object files for target ft_printf_clion
ft_printf_clion_EXTERNAL_OBJECTS =

ft_printf_clion: CMakeFiles/ft_printf_clion.dir/test_main.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/ft_make_parse.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/ft_num_utils.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/ft_print_utils.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/ft_printf.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/ft_printf_utils.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/parse_nums_funcs.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/get_width_precis.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/add_x_num_utils.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/libft/ft_atoi.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/libft/ft_itoa.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/libft/ft_calloc.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/libft/ft_bzero.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/libft/ft_strlen.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/libft/ft_strlcpy.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/libft/ft_putchar_fd.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/build.make
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking C executable ft_printf_clion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ft_printf_clion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ft_printf_clion.dir/build: ft_printf_clion

.PHONY : CMakeFiles/ft_printf_clion.dir/build

CMakeFiles/ft_printf_clion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ft_printf_clion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ft_printf_clion.dir/clean

CMakeFiles/ft_printf_clion.dir/depend:
	cd /Users/anastasia/CLionProjects/clion-printf/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/anastasia/CLionProjects/clion-printf /Users/anastasia/CLionProjects/clion-printf /Users/anastasia/CLionProjects/clion-printf/cmake-build-debug /Users/anastasia/CLionProjects/clion-printf/cmake-build-debug /Users/anastasia/CLionProjects/clion-printf/cmake-build-debug/CMakeFiles/ft_printf_clion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ft_printf_clion.dir/depend

