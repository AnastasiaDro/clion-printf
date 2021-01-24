/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:54:32 by cerebus           #+#    #+#             */
/*   Updated: 2021/01/16 16:54:32 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print_flags *ft_create_struct()
{
	t_print_flags *my_struct;

	my_struct = (t_print_flags *)malloc(sizeof(t_print_flags));
	if (!my_struct)
		return (NULL);
	my_struct->lenght = 0;
	my_struct->flag_minus = 0;
	my_struct->flag_zero = 0;
	my_struct->width = 0;
    my_struct->precis = 0;
    my_struct->type = 0;
	return (my_struct);
}

int ft_fill_struct(t_print_flags *my_struct, int lenght, char **p)
{
    char *num_string;
    if ((**p) == '-')
    {
        my_struct->flag_minus = 1;
        (*p)++;
    } else if ((**p) == '0')
    {
        my_struct->flag_zero = 1;
        (*p)++;
    }
    //обрабатываем ширину			ПОКА БЕЗ *
    num_string = ft_num_for_sruct(p);
    if (num_string)
        my_struct->width = ft_atoi(num_string);
    ft_make_string_clear(&num_string);
    //обрабатываем точность			ПОКА БЕЗ *
    if (**p == '.')
    {
        (*p)++;
        num_string = ft_num_for_sruct(p);
        my_struct->precis = ft_atoi(num_string);
    }
    my_struct->lenght = lenght;
    free(num_string);
    //теперь выловим код выводимого значения (строка там или чар)
    my_struct->type = **p;
    //сдвинем p с дэ
    (*p)++;
    return (lenght);
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
        //(*length)++;
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

int	ft_putstr_printf(char *s, int precis_len)
{
    int str_len;
    if (!precis_len)
        str_len = ft_strlen(s);
    else
        str_len = precis_len;
	if (s)
		write(1, s, str_len);
    return (str_len);
}

int	ft_get_capacity(int n, int base)
{
	int nm;
	int num_cap;

	nm = n;
	num_cap = 0;
	while (nm != 0)
	{
		nm = nm / base;
		num_cap++;
	}
	return (num_cap);
}

//конвертируем в 16тиричную систему число
char ft_convert_to_x(int n, char *base)
{
    char res;
    if (n<10)
        res = n + '0';
    else
        res = base[n - 10];
    return (res);
}


char	*ft_fill_x_s(char *s, int x_num, int num_cap, char *base) {
    int divis;
    if (x_num == 0)
        s[0] = '0';
    while (num_cap > 0) {
        divis = x_num % 16;
        s[num_cap - 1] = ft_convert_to_x(divis, base);
        x_num = x_num / 16;
        num_cap--;
    }
    return (s);
}

char *ft_get_x_num_str(int x_num, int num_cap, char *base)
{
    int size;
    char *s;
    int start;

    start = 0;
    size = (x_num < 1) ? num_cap + 2 : num_cap + 1;
    s = malloc(size * sizeof(char));
    if (!s)
        return (NULL);
    s[size] = '\0';
    if (x_num < 0)
    {
        s[start] = '-';
        num_cap = num_cap * (-1);
        start++;
    }
    return(ft_fill_x_s(&s[start], x_num, num_cap, base));
}
