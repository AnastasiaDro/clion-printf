/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_parse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 23:48:21 by cerebus           #+#    #+#             */
/*   Updated: 2021/01/14 23:53:52 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//внимание! тут подключаю другую либу! нужно со школьного мака
//взять правильную
#include "ft_printf.h"
#include <stdio.h>

int ft_make_parse(t_print_flags *my_struct, va_list *v_list, int *res_len)
{
	char symbol;

	symbol = my_struct->type;
	//если знак поцента
	if (symbol == '%')
		write(1,"%%", 1);
	//if (symbol == 'c')
	//	ft_print_char(v_list, res_len);
	//if (symbol == 's')
		//
	//if (symbol == 'p')
		//
	 if (symbol == 'd' || symbol =='i')
		ft_print_int(my_struct, v_list, res_len);
	//if (symbol == 'u')
		//
	//if (symbol == 'X' || symbol =='x')
		//
	return (*res_len);
}

int ft_print_int(t_print_flags *my_struct, va_list *v_list, int *res_len)
//int ft_print_int(t_print_flags *my_struct, va_list v_list, int *res_len)
{
	//длина нашего инта
	int		num_len;
	int		print_num;
	char	*num_string;
	int		zero_num;
	int		i;
	char 	width_symbol;
	int		width_symbol_num;

	i = 0;
	num_len = 0;
	zero_num = 0;
	width_symbol_num = 0;
	width_symbol = ' ';
	//наше число для печати
	print_num = va_arg(*v_list, int);
	//printf("\nMY VA_ARG\n %d\n", print_num);

	//вычисляем длину инта
	num_len = ft_get_capacity(print_num);
    if (print_num < 0)
        print_num = print_num * (-1);
	num_string = ft_itoa(print_num);

	//если есть ширина
	if (my_struct->width)
	{
		if (my_struct->flag_zero)
			width_symbol = '0';
		//считаем пробелы без вычета нулей
		width_symbol_num = my_struct->width - num_len;
		//если число меньше нуля еще уменьшаем
		if (print_num < 0)
			width_symbol_num--;
	} 
	//если есть точность, считаем нули
	if (my_struct->precis)
	{
		zero_num = my_struct->precis - num_len;
		width_symbol = ' ';
		if (zero_num > 0)
			width_symbol_num = width_symbol_num - zero_num;
	}
	//если  не минус
	if (!(my_struct->flag_minus))
	{
		//сперва пробелы
		while (width_symbol_num > 0)
		{
			write(1, &width_symbol, 1);
            (*res_len)++;
			width_symbol_num--;
		}
		if (print_num < 0)
		{
			write(1, "-", 1);
            (*res_len)++;
		}
		while (zero_num > 0)
		{
			write(1, "0", 1);
            (*res_len)++;
			zero_num--;
		}
        (*res_len) = (*res_len) + ft_putstr_printf(num_string);
	}
	//если есть флаг минус
	else
	{
//сперва минус
        if (print_num < 0)
        {
            write(1, "-", 1);
            (*res_len)++;
        }
        while (zero_num > 0)
        {
            write(1, "0", 1);
            (*res_len)++;
            zero_num--;
        }
        (*res_len) = (*res_len) + ft_putstr_printf(num_string);
        //в конце пробелы
        while (width_symbol_num > 0)
        {
            write(1, &width_symbol, 1);
            (*res_len)++;
            width_symbol_num--;
        }
	}
	return (*res_len);
}

int ft_print_char(va_list *v_list, int *res_len)
{
	return 1;
}
	


