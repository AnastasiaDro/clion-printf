cmake_minimum_required(VERSION 3.17)
project(ft_printf_clion C)

set(CMAKE_C_STANDARD 99)

include_directories(libft-finished-for-use)
add_executable(ft_printf_clion test_main.c ft_make_parse.c ft_num_utils.c ft_print_utils.c ft_printf.c ft_printf_utils.c
        libft-finished-for-use/ft_atoi.c libft-finished-for-use/ft_itoa.c libft-finished-for-use/ft_calloc.c
        libft-finished-for-use/ft_bzero.c libft-finished-for-use/ft_strlen.c libft-finished-for-use/ft_strlcpy.c
        libft-finished-for-use/ft_putchar_fd.c)