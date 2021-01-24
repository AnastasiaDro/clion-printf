/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 21:00:53 by cerebus           #+#    #+#             */
/*   Updated: 2021/01/20 21:00:53 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

int main()
{
    printf("ШЕСТНАДЦАТИРИЧНЫЕ\n");
    int res = ft_printf("six (with zero-flag and width and precis %-20.5xtratata\n"
              "seven-hundred (without zero_flag and with precis less then number) %.1X\n",
              6, 700);
    printf("RES_MY %d\n", res);
    //original printf
    ft_printf("\noriginal function\n");
   res =  printf("six (with zero-flag and width and precis %-20.5xtratata\n"
           "seven-hundred (without zero_flag and with precis less then number) %.1X\n",
           6, 700);
    printf("RES_ORIG %d\n", res);

    printf("\nЧАРЫ\n");
//    ft_printf("мой чар точность 15 %15c после\n", 'T');
//    ft_printf("мой чар точность -15 %-15c после\n", 'T');
//
//    ft_printf("\noriginal function\n");
//    printf("мой чар точность 15 %15c после\n", 'T');
//    printf("мой чар точность -15 %-15c после\n", 'T');

    printf("\nСТРОКИ\n");
//    ft_printf("передаем строку%sпосле строки\n", "my string");
//    ft_printf("минус, точность 4\n%-.4sпосле строки\n", "my string");
//    ft_printf("минус, ширина 20, точность 7\n%-20.7sпосле строки\n", "my string");
//    ft_printf("без минуса, ширина 25, точность 7%25.7sпосле строки\n", "my string");
//    ft_printf("ширина 1 точность 7\n%1.7sпосле строки\n", "my string");
//    ft_printf("ширина 20, флаг 0 точность 7\n%20.7sпосле строки\n", "my string");
//
//    ft_printf("\noriginal function\n");
//    printf("передаем строку%sпосле строки\n", "my string");
//    printf("минус, точность 4\n%-.4sпосле строки\n", "my string");
//    printf("минус, ширина 20, точность 7\n%-20.7sпосле строки\n", "my string");
//    printf("без минуса, ширина 25, точность 7%25.7sпосле строки\n", "my string");
//    printf("ширина 1 точность 7\n%1.7sпосле строки\n", "my string");
 //   printf("ширина 20, флаг 0 точность 7\n%20.7sпосле строки\n", "my string");
    //ft_printf("%-10dtratata\n", 5);

    printf("\nИНТЫ\n");
//    ft_printf("six (with zero-flag and width and precis %-20.5itratata\n"
//              "seven-hundred (without zero_flag and with precis less then number) %.1d",
//              6, 700);
//    //original printf
//    ft_printf("\noriginal function\n");
//    printf("six (with zero-flag and width and precis %-20.5itratata\n"
//           "seven-hundred (without zero_flag and with precis less then number) %.1d",
//           6, 700);


}