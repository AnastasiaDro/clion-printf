/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:54:32 by cerebus           #+#    #+#             */
/*   Updated: 2021/01/28 15:32:08 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print_flags *ft_create_struct()
{
	t_print_flags *my_struct;

	my_struct = (t_print_flags *)malloc(sizeof(t_print_flags));
	if (!my_struct)
		return (NULL);
	my_struct->length = 0;
	my_struct->flag_minus = 0;
	my_struct->flag_zero = 0;
	my_struct->width = 0;
    my_struct->precis = 0;
    my_struct->type = 0;
    my_struct->width_symbol = ' ';
    my_struct->less_zero = 0;
    my_struct->dot = 0;
	return (my_struct);
}

int ft_fill_struct(t_print_flags *my_struct, int length, char **p, va_list *v_list)
{
  //  char *num_string;
    if ((**p) == '-')
    {
        my_struct->flag_minus = 1;
        (*p)++;
    } else if ((**p) == '0')
    {
        my_struct->flag_zero = 1;
        (*p)++;
    }
    //обрабатываем ширину
    //звёздочка
   //my_struct->width = ft_get_param(v_list, p);
   ft_get_width(v_list, p, my_struct);
    ft_get_precis(v_list, p, my_struct);
//    if (**p == '.')
//    {
//        (*p)++;
//		my_struct->precis = ft_get_param(v_list, p);
//    }
    my_struct->length = length;
    my_struct->type = **p;
    //сдвинем p с дэ
    (*p)++;
    return (length);
}
//вылавливает из строки число
char *ft_num_for_sruct(char **p)
{
    char 	*tmp;
    char 	*num_string;
    int		str_len;
    int 	i;

    i = 0;
    str_len = 10;
    if(!(num_string = ft_calloc(str_len + 1, sizeof(char))))
        return (NULL);
    while ((**p) >= '0' && (**p) <= '9')    //тут мы должны получить все цифры из format строки, обозначающие ширину.
    {									//не обрабатывается случай сочетания -0
        if(i > str_len)
        {
            str_len = str_len + 10;
            tmp = num_string;
            num_string = ft_calloc(str_len+1, sizeof(char));
            ft_strlcpy(num_string, tmp, str_len); //т.к. строка tmp всегда короче width_string, то мы можем пихать любое число, больше ее длины
            free(tmp);
            tmp = NULL;
        }
        num_string[i] = **p;
        (*p)++;
        i++;
    }
    return (num_string);
}

void ft_make_string_clear(char **str)
{
	char *tmp;

	tmp = *str;
	*str = NULL;
	free(tmp);
}

int	ft_putstr_printf(char *s, int precis, t_print_flags *my_struct)
{
    int str_len;

    str_len = 0;
	if (my_struct->type == 's')
		str_len = precis;
	else
	{
		str_len = ft_strlen(s);
		if (my_struct->dot && !my_struct->precis && str_len == 1 && s[0] == '0')
			return 0;
	}
  //  if (!precis_len)
//	if (!precis && my_struct->dot)
//        str_len = ft_strlen(s);
//    else
//        str_len = precis;
	if (s)
		write(1, s, str_len);
    return (str_len);
}

//int ft_get_param(va_list *v_list, char **p)
//{
//	int param;
//	char *num_string;
//
//	param = 0;
//	num_string = NULL;
//	if (**p == '*') {
//		(*p)++;
//		param = va_arg(*v_list, int);
//	}
//	else
//	{
//		num_string = ft_num_for_sruct(p);
//		if (num_string)
//			param = ft_atoi(num_string);
//		ft_make_string_clear(&num_string);
//	}
//	return (param);
//}


int ft_get_width(va_list *v_list, char **p, t_print_flags *my_struct) {
	int param;
	char *num_string;

	param = 0;
	num_string = NULL;
	if (**p == '*')
	{
		(*p)++;
		param = va_arg(*v_list, int);
		if (param < 0) {
			my_struct->width = param * (-1);
			my_struct->flag_minus = 1;
		}
		else
		{
			my_struct->width = param;
		}
	} else {
		num_string = ft_num_for_sruct(p);
		if (num_string)
			param = ft_atoi(num_string);
		ft_make_string_clear(&num_string);
		my_struct->width = param;
	}
	return my_struct->width;
}

int ft_get_precis(va_list *v_list, char **p, t_print_flags *my_struct)
{
	int param;
	char *num_string;

	param = 0;
	num_string = NULL;
	if (**p == '.') {
		(*p)++;
		my_struct->dot = 1;
		if (**p == '*')
		{
			(*p)++;
			my_struct->precis = va_arg(*v_list, int);
		}
		else {
			num_string = ft_num_for_sruct(p);
			if (num_string)
				param = ft_atoi(num_string);
			ft_make_string_clear(&num_string);
			my_struct->precis = param;
		}
	}
	return (my_struct->precis);
}