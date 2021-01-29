/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:54:32 by cerebus           #+#    #+#             */
/*   Updated: 2021/01/28 12:39:37 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_capacity(unsigned long int n, int base)
{
	unsigned long int nm;
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
char ft_convert_to_x(unsigned int n, char *base)
{
    char res;
    
    if (n<10)
        res = n + '0';
    else
        res = base[n - 10];
    return (res);
}

char *get_base(char type)
{
    char *base;

    if(type == 'X')
        base = "ABCDEF";
    else
        base = "abcdef";
    return (base);
}

int ft_get_num_syst(char type, char **base)
{
    int num_sys;
    if (type == 'd' || type == 'i' || type == 'u')
    {
        num_sys = 10;
        *base = NULL;
    }
    if (type == 'X' || type == 'x' || type == 'p')
    {
         num_sys = 16;
         *base = (char *)get_base(type);
    }
    return (num_sys);
}

void ft_fill_s(char **s, unsigned long num, char type, int num_cap)
{
    unsigned long divis;
    int num_sys;
    char *base;
    int limit;

    limit = 0;
    if (type == 'p')
    {
        (*s)[0] = '0';
        (*s)[1] = 'x';
        limit = 2;
    }
    num_sys = ft_get_num_syst(type, &base);
    if (num == 0)
        (*s)[0] = '0';
    while (num_cap > limit) {
        divis = num % num_sys;
        if(num_sys == 16)
            (*s)[num_cap - 1] = ft_convert_to_x(divis, base);
        if (num_sys == 10)
            (*s)[num_cap - 1] = num % 10 + '0';
        num = num / num_sys;
        num_cap--;
    }
}

char	*ft_get_s(int num, int num_cap, char type)
{
    int size;
    char *s;

   size = num_cap + 1;
    if(!( s = ft_calloc(size, sizeof(char))))
        return (NULL);
    if (num < 0)
        num = num * (-1);
    ft_fill_s(&s, num, type, num_cap);
    return (s);
}

char	*ft_get_unsign_s(unsigned long int num, int num_cap, char type)
{
    int size;
    char *s;

    if (type == 'p')
        num_cap = num_cap + 2;
    size = num_cap + 1;
    if(!( s = ft_calloc(size, sizeof(char))))
        return (NULL);
    ft_fill_s(&s, num, type, num_cap);
    return (s);
}


