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
# include "libft-finished-for-use/libft.h"
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
}				t_print_flags;

int ft_printf(const char *, ...);

int ft_make_parse(t_print_flags *my_struct, va_list *v_list);

int ft_print_char(t_print_flags *my_struct, va_list *v_list);

int ft_print_string(t_print_flags *my_struct, va_list *v_list);

int ft_print_pointer(va_list v_list, int res_len);

int ft_print_int(t_print_flags *my_struct, va_list *v_list);

int ft_print_Xx(t_print_flags *my_struct, va_list *v_list);

//считаем длину числа
int ft_take_num_length(int number);
int	ft_get_capacity(int n, int base);

//utils
t_print_flags *ft_create_struct();

int ft_fill_struct(t_print_flags *my_struct, int lenght, char **p);

//берет цифры ширины или точности из строки и записывает их в отдельную спец строку
char *ft_num_for_sruct(char **p);

//присваивает строке NULL и очищает память, присвоенную ей
void ft_make_string_clear(char **str);

//вывод строки + возврат ее длины
int	ft_putstr_printf(char *s, int precis_len);

char *ft_get_x_num_str(int x_num, int num_cap, char *base);
#endif