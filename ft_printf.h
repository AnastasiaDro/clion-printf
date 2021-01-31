/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 17:41:11 by cerebus           #+#    #+#             */
/*   Updated: 2021/01/28 15:31:47 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
//# include "ft_parse_utils.h"

typedef	struct	s_print_flags
{
	int		length;
	int 	flag_minus;
	int		flag_zero;
	int		width;
	int		precis;
	char	type;
	char	width_symbol;
	int     less_zero;
	int		dot;
}				t_print_flags;

int ft_printf(const char *, ...);

int ft_make_parse(t_print_flags *my_struct, va_list *v_list);

int ft_print_char(t_print_flags *my_struct, va_list *v_list);

int ft_print_string(t_print_flags *my_struct, va_list *v_list);

int ft_print_pointer(t_print_flags *my_struct, va_list *v_list);

int ft_print_int(t_print_flags *my_struct, va_list *v_list);

int ft_print_Xx(t_print_flags *my_struct, va_list *v_list);

int ft_print_u(t_print_flags *my_struct, va_list *v_list);

//utils
t_print_flags *ft_create_struct();

int ft_fill_struct(t_print_flags *my_struct, int length, char **p, va_list *v_list);
//получает параметры ширины или точности
int ft_get_param(va_list *v_list, char **p);

//берет цифры ширины или точности из строки и записывает их в отдельную спец строку
char *ft_num_for_sruct(char **p);

//присваивает строке NULL и очищает память, присвоенную ей
void ft_make_string_clear(char **str);

//вывод строки + возврат ее длины
int	ft_putstr_printf(char *s, int precis_len);

char *ft_get_x_num_str(int x_num, int num_cap, char *base);

int ft_get_width(va_list *v_list, char **p, t_print_flags *my_struct);

int ft_get_precis(va_list *v_list, char **p, t_print_flags *my_struct);
#endif