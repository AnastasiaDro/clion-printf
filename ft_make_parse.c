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
#include "ft_parse_utils.h"
#include <stdio.h>

int ft_make_parse(t_print_flags *my_struct, va_list *v_list)
{
	char symbol;

	symbol = my_struct->type;
	//если знак поцента
	if (symbol == '%')
    {
        write(1,"%%", 1);
        //(*res_len)++;
        my_struct->length++;
    }
	if (symbol == 'c')
		ft_print_char(my_struct, v_list);
	if (symbol == 's')
		ft_print_string(my_struct, v_list);
	//if (symbol == 'p')
		//
	 if (symbol == 'd' || symbol =='i')
		ft_print_int(my_struct, v_list);
	//if (symbol == 'u')
		//
	if (symbol == 'X' || symbol =='x')
        ft_print_Xx(my_struct, v_list);
	return (my_struct->length);
}

int ft_print_int(t_print_flags *my_struct, va_list *v_list)
{
	//длина нашего инта
	int		num_len;
	int		print_num;
	char	*num_string;
	int		zero_num;
	char 	width_symbol;
	//int		width_symbol_num;
	char    *start_p;

	zero_num = 0;
	//width_symbol_num = 0;
	width_symbol = ' ';
	//наше число для печати
	print_num = va_arg(*v_list, int);

	//вычисляем длину инта
	num_len = ft_get_capacity(print_num, 10);
	num_string = ft_itoa(print_num);
	start_p = num_string;
	//если есть ширина
	if (my_struct->width)
	    ft_calc_width(my_struct, &width_symbol, num_len, print_num);
	//если есть точность, считаем нули
	if (my_struct->precis)
	{
		zero_num = my_struct->precis - num_len;
		width_symbol = ' ';
		if (zero_num > 0)
            my_struct->width = my_struct->width - zero_num;
	}
	//если  не минус
	if (!(my_struct->flag_minus))
	{
		//сперва ширина
        ft_print_width(width_symbol, my_struct);
		if (print_num < 0)
		ft_print_minus(&start_p, my_struct);
        ft_print_precis(zero_num, my_struct);
        my_struct->length = my_struct->length + ft_putstr_printf(start_p, 0);
	}
	//если есть флаг минус
	else
	{
//сперва минус
        if (print_num < 0)
            ft_print_minus(&start_p, my_struct);
        ft_print_precis(zero_num, my_struct);
        my_struct->length = my_struct->length + ft_putstr_printf(start_p, 0);
        //в конце пробелы
        ft_print_width(width_symbol, my_struct);
	}
	free(num_string);
	num_string = NULL;
	return (1);
}

int ft_print_string(t_print_flags *my_struct, va_list *v_list)
{
    char    *str_for_print;
    char 	width_symbol;
    int		width_symbol_num;
    int     str_len;

    width_symbol = ' ';
    width_symbol_num = 0;
    str_for_print = va_arg(*v_list, char *);
    str_len = ft_strlen(str_for_print);
    //узнаем длину строки с учетом точности
    //и присвоим итоговой длине выведенной строки
    if (my_struct->precis < str_len)
        str_len = my_struct->precis;
    //узнаем количество символов ширины
    if (my_struct->width > str_len)
        width_symbol_num = my_struct->width - str_len;
    if(!(my_struct->flag_minus))
    {
        ft_print_width(width_symbol, my_struct);
        my_struct->length = my_struct->length + ft_putstr_printf(str_for_print, str_len);
    }
    else
    {
        my_struct->length = my_struct->length + ft_putstr_printf(str_for_print, str_len);
        ft_print_width(width_symbol, my_struct);
    }
    return (1);
}


int ft_print_char(t_print_flags *my_struct, va_list *v_list)
{
    char    char_for_print;
    char 	width_symbol;
    //int		width_symbol_num;

    char_for_print = (char)va_arg(*v_list, int);
    width_symbol = ' ';
    //width_symbol_num = my_struct->width-1;
    my_struct->width--;

    if (!(my_struct->flag_minus))
    {
        ft_print_width(width_symbol, my_struct);
        write(1, &char_for_print, 1);
        my_struct->length++;
    }
    else
    {
        write(1, &char_for_print, 1);
        my_struct->length++;
        ft_print_width(width_symbol, my_struct);
    }
	return (1);
}

int ft_print_Xx(t_print_flags *my_struct, va_list *v_list)
{
    char    *base;
    int     print_num;
    int		num_len;
    char	*x_num_string;
    int		zero_num;
    char 	width_symbol;
   // int		width_symbol_num;
    char    *start_p;

    zero_num = 0;
  //  width_symbol_num = 0;
    width_symbol = ' ';
    //наше число для печати
    print_num = va_arg(*v_list, int);


    if (my_struct->type == 'X')
        base = "ABCDEF";
    else
        base = "abcdef";
    num_len = ft_get_capacity(print_num, 16);
    x_num_string = ft_get_x_num_str(print_num, num_len, base);
    start_p = x_num_string;

    if (my_struct->width)
        ft_calc_width(my_struct, &width_symbol, num_len, print_num);
    //если есть точность, считаем нули
    if (my_struct->precis)
    {
        zero_num = my_struct->precis - num_len;
        width_symbol = ' ';
        if (zero_num > 0)
            my_struct->width = my_struct->width - zero_num;
    }
    //если  не минус
    if (!(my_struct->flag_minus))
    {
        //сперва пробелы
        ft_print_width(width_symbol, my_struct);
        if (print_num < 0)
            ft_print_minus(&start_p, my_struct);
        ft_print_precis(zero_num, my_struct);
        my_struct->length = my_struct->length + ft_putstr_printf(start_p, 0);
    }
        //если есть флаг минус
    else
    {
//сперва минус
        if (print_num < 0)
            ft_print_minus(&start_p, my_struct);
        ft_print_precis(zero_num, my_struct);
        my_struct->length = my_struct->length + ft_putstr_printf(start_p, 0);
        //в конце пробелы
        ft_print_width(width_symbol, my_struct);
    }
    free(x_num_string);
    x_num_string = NULL;
    return (1);
}
	


