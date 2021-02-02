/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 21:00:53 by cerebus           #+#    #+#             */
/*   Updated: 2021/01/30 18:25:59 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
//    char *p;
//    p = "trtratra";
//    printf("ПОИНТЕР %p\n", p);
//    int res;

//     printf("ШЕСТНАДЦАТИРИЧНЫЕ\n");
//     res = ft_printf("six (with zero-flag and width and precis %-20.5xtratata\n"
//               "seven-hundred (without zero_flag and with precis less then number) %.1X\n",
//               6, 700);
//    printf("RES_MY %d\n", res);
//    //original printf
//    ft_printf("\noriginal function\n");
  // res =  printf("six (with zero-flag and width and precis %-20.5xtratata\n"
   //        "seven-hundred (without zero_flag and with precis less then number) %.1X\n",
  //         6, 700);
//    printf("RES_ORIG %d\n", res);
//
//    printf("\nЧАРЫ\n");
//    ft_printf("мой чар точность 15 %15c после\n", 'T');
//    ft_printf("мой чар точность -15 %-15c после\n", 'T');
//
//    ft_printf("\noriginal function\n");
//    printf("мой чар точность 15 %15c после\n", 'T');
//    printf("мой чар точность -15 %-15c после\n", 'T');
////
//////    printf("\nСТРОКИ\n");
////    ft_printf("передаем строку%sпосле строки\n", "my string");
////    ft_printf("минус, точность 4\n%-.4sпосле строки\n", "my string");
////    ft_printf("минус, ширина 20, точность 7\n%-20.7sпосле строки\n", "my string");
////    ft_printf("без минуса, ширина 25, точность 7%25.7sпосле строки\n", "my string");
////    ft_printf("ширина 1 точность 7\n%1.7sпосле строки\n", "my string");
////    ft_printf("ширина 20, флаг 0 точность 7\n%20.7sпосле строки\n", "my string");
////
//    // ft_printf("\noriginal function\n");
////    printf("передаем строку%sпосле строки\n", "my string");
////    printf("минус, точность 4\n%-.4sпосле строки\n", "my string");
////    printf("минус, ширина 20, точность 7\n%-20.7sпосле строки\n", "my string");
////    printf("без минуса, ширина 25, точность 7%25.7sпосле строки\n", "my string");
////    printf("ширина 1 точность 7\n%1.7sпосле строки\n", "my string");
////    printf("ширина 20, флаг 0 точность 7\n%20.7sпосле строки\n", "my string");
////    ft_printf("%-10dtratata\n", 5);
////
////    printf("\nИНТЫ\n");
////    ft_printf("six (with -flag and width and precis %-20.5itratata\n"
////              "seven-hundred (without zero_flag and with precis less then number) %.1d",
////              -6, -700);
////    //original printf
////    ft_printf("\noriginal function\n");
////    printf("six (with -flag and width and precis %-20.5itratata\n"
////           "seven-hundred (without zero_flag and with precis less then number) %.1d",
////           -6, -700);
//
//
//	//нолики
//	printf("\nпечать нуля \n");
//	printf("ORIG \n");
//	printf("1i, %1d, %1d, %1d, %1d, %1d, %1d, %1d\n", 8, -12, 123456789,  0, -12345678, 97, -1562067968, 2147483647);
//	printf("MY \n");
//	ft_printf("1i, %1d, %1d, %1d, %1d, %1d, %1d, %1d\n", 8, -12, 123456789,  0, -12345678, 97, -1562067968, 2147483647);
//
//	printf("ORIG \n");
//	printf("%1i\n", 0);
//	printf("MY \n");
//	ft_printf("%1i\n", 0);
//
//	printf("ORIG \n");
//	printf("%.1d\n", 0);
//	printf("MY \n");
//	ft_printf("%.1d\n", 0);
	int		a = 4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";
	int *ptr = NULL;
	unsigned int HH;

	printf("ORIG \n");
	printf("-->|%-9.p|<--\n", ptr);
	printf("-->|%-9p|<--\n", ptr);
//			+Printf("-->|%-16.p|<--\n", p);	==>	-->|0x0                |<--
//			Printf("-->|%-16p|<--\n", p);	==>	-->|0x0
//	printf("%% *.5i 42 == |% *.5i|\n", 4, 42);
//	printf("%% *.5i 42 == |%    -*.5i|\n", 4, 42);
	//printf("%-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);
	printf("MY \n");
	ft_printf("-->|%-9.p|<--\n", ptr);
	ft_printf("-->|%-9p|<--\n", ptr);
//	ft_printf("%% *.5i 42 == |% *.5i|\n", 4, 42);
	//ft_printf("%-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);

}