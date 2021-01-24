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
    {
        write(1,"%%", 1);
        (*res_len)++;
    }
	if (symbol == 'c')
		ft_print_char(my_struct, v_list, res_len);
	if (symbol == 's')
		ft_print_string(my_struct, v_list, res_len);
	//if (symbol == 'p')
		//
	 if (symbol == 'd' || symbol =='i')
		ft_print_int(my_struct, v_list, res_len);
	//if (symbol == 'u')
		//
	if (symbol == 'X' || symbol =='x')
        ft_print_Xx(my_struct, v_list, res_len);
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
	char 	width_symbol;
	int		width_symbol_num;

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
        (*res_len) = (*res_len) + ft_putstr_printf(num_string, 0);
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
        (*res_len) = (*res_len) + ft_putstr_printf(num_string, 0);
        //в конце пробелы
        while (width_symbol_num > 0)
        {
            write(1, &width_symbol, 1);
            (*res_len)++;
            width_symbol_num--;
        }
	}
	free(num_string);
	num_string = NULL;
	return (*res_len);
}

int ft_print_string(t_print_flags *my_struct, va_list *v_list, int *res_len)
{
    char    *str_for_print;
    char 	width_symbol;
    int		width_symbol_num;
    int     str_len;

    width_symbol = ' ';
    width_symbol_num = 0;
    str_for_print = va_arg(*v_list, char *);
    str_len = ft_strlen(str_for_print);
    //проверим флаг 0
//    if(my_struct->flag_zero && !(my_struct->flag_minus))
//        width_symbol = '0';
    //узнаем длину строки с учетом точности
    //и присвоим итоговой длине выведенной строки
    if (my_struct->precis < str_len)
        str_len = my_struct->precis;
    //узнаем количество символов ширины
    if (my_struct->width > str_len)
        width_symbol_num = my_struct->width - str_len;
    if(!(my_struct->flag_minus))
    {
        while (width_symbol_num > 0)
        {
            write(1, &width_symbol, 1);
            (*res_len)++;
            width_symbol_num--;
        }
        (*res_len) = (*res_len) + ft_putstr_printf(str_for_print, str_len);
    }
    else
    {
        (*res_len) = (*res_len) + ft_putstr_printf(str_for_print, str_len);
        while (width_symbol_num > 0)
        {
            write(1, &width_symbol, 1);
            (*res_len)++;
            width_symbol_num--;
        }
    }
    return (*res_len);
}


int ft_print_char(t_print_flags *my_struct, va_list *v_list, int *res_len)
{
    char    char_for_print;
    char 	width_symbol;
    int		width_symbol_num;

    char_for_print = (char)va_arg(*v_list, int);
    width_symbol = ' ';
    width_symbol_num = my_struct->width-1;

    if (!(my_struct->flag_minus))
    {
        while (width_symbol_num > 0)
        {
            write(1, &width_symbol, 1);
            (*res_len)++;
            width_symbol_num--;
        }
        write(1, &char_for_print, 1);
        (*res_len)++;
    }
    else
    {
        write(1, &char_for_print, 1);
        (*res_len)++;
        while (width_symbol_num > 0)
        {
            write(1, &width_symbol, 1);
            (*res_len)++;
            width_symbol_num--;
        }
    }
	return (*res_len);
}

int ft_print_Xx(t_print_flags *my_struct, va_list *v_list, int *res_len)
{
    char    *base;
    int     print_num;
    int		num_len;
    char	*x_num_string;
    int		zero_num;
    char 	width_symbol;
    int		width_symbol_num;

    zero_num = 0;
    width_symbol_num = 0;
    width_symbol = ' ';
    //наше число для печати
    print_num = va_arg(*v_list, int);


    if (my_struct->type == 'X')
        base = "0123456789ABCDEF";
    else
        base = "0123456789abcdef";

    return (*res_len);
}
	


