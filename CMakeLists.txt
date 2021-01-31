cmake_minimum_required(VERSION 3.17)
project(ft_printf_clion C)

set(CMAKE_C_STANDARD 99)

include_directories(libft)
add_executable(ft_printf_clion test_main.c ft_make_parse.c ft_num_utils.c ft_print_utils.c ft_printf.c ft_printf_utils.c
        libft/ft_atoi.c libft/ft_itoa.c libft/ft_calloc.c
        libft/ft_bzero.c libft/ft_strlen.c libft/ft_strlcpy.c
        libft/ft_putchar_fd.c)