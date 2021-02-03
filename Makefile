# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/30 14:29:50 by cerebus           #+#    #+#              #
#    Updated: 2021/02/03 14:08:22 by cerebus          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
FLAGS	=	-Wall -Wextra -Werror -I $(INC)
PRINTF	= 	ft_printf.c ft_printf_utils.c ft_make_parse.c ft_num_utils.c print_width_precis.c get_width_precis.c\
			ft_print_utils.c parse_nums_funcs.c add_x_num_utils.c
LIB		=	libft/ft_atoi.c libft/ft_bzero.c libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c\
			libft/ft_isprint.c libft/ft_memccpy.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c\
			libft/ft_memmove.c libft/ft_memset.c libft/ft_strchr.c libft/ft_strlcat.c libft/ft_strlcpy.c\
			libft/ft_strlen.c libft/ft_strncmp.c libft/ft_strrchr.c libft/ft_tolower.c libft/ft_strnstr.c\
			libft/ft_toupper.c libft/ft_calloc.c libft/ft_strdup.c libft/ft_substr.c libft/ft_strjoin.c libft/ft_strtrim.c\
			libft/ft_split.c libft/ft_itoa.c libft/ft_strmapi.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c\
			libft/ft_putendl_fd.c libft/ft_putnbr_fd.c\
			libft/ft_lstnew.c libft/ft_lstadd_front.c libft/ft_lstsize.c libft/ft_lstlast.c libft/ft_lstadd_back.c\
			libft/ft_lstdelone.c libft/ft_lstclear.c libft/ft_lstiter.c libft/ft_lstmap.c
OBJS	=	$(PRINTF:.c=.o)
LIBOBJS =	$(LIB:.c=.o)
INC		=   printf.h
CC		=	cc

%.o : %.c
			$(CC) -c $(FLAGS) -o $@ $<

$(NAME):	$(OBJS) $(LIBOBJS)
			ar rc $(NAME) $(OBJS) $(LIBOBJS)

all:		$(NAME)

clean:
			rm -f $(OBJS) $(LIBOBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re