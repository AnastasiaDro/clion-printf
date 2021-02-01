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
	int		a = -4;
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
//
//	//printf("\nзвёздочки с интами\n");
//	printf("ORIG \n");
////	printf("%.0i, %0.d, %0.d, %0.d, %0.d", 0, -12345678, 97, -1562067968, 2147483647);
////	printf("%8i, %8d, %8d, %8d, %8d, %8d, %8d, %8d", i, j, k, l, m, c, e, d); //T11
//	 //T11
	printf("ORIG \n");
	//printf(" %s, %c, %d, %u, %x, %X",  n, c, c, j, j, j);
//	printf("%0d", e);
	printf("0-d    %0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d\n", i, j, k, l, m, c, e, d);
	printf("-0     %-0i, %-0d, %-0d\n", i, j, k);
	printf("--0    %--0i, %--0d, %--0d, %--0d\n", i, j, k);
	printf("--010  %--010i, %--010d, %--010d\n", i, j, k);
	printf("%00-i, %00-d\n", i, j);
	printf("\nMY \n");
//	ft_printf(" %s, %c, %d, %u, %x, %X",  n, c, c, j, j, j);
	ft_printf("0-d    %0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d\n", i, j, k, l, m, c, e, d);
	ft_printf("-0     %-0i, %-0d, %-0d\n", i, j, k);
	ft_printf("--     %--0i, %--0d, %--0d, %--0d\n", i, j, k);
	ft_printf("--010  %--010i, %--010d, %--010d\n", i, j, k);
	ft_printf("%00-i, %00-d\n", i, j);
//	//ft_printf("%8i, %8d, %8d, %8d, %8d, %8d, %8d, %8d", i, j, k, l, m, c, e, d); //T11
//	ft_printf("%0d\n", e); //T11
//	//ft_printf("%.0i, %0.d, %0.d, %0.d, %0.d", 0, -12345678, 97, -1562067968, 2147483647);
////	printf("\nзвёздочки с интами\n");
//	ft_printf("со звездочками без флагов %*.*duuu\n", 8, 4, 10);
//	printf("со звездочками без флагов %*.*duuu\n", 8, 4, 10);
////    printf("\nUNSIGNED INTS\n");
////    unsigned int mint = 4147483648;
//////    ft_printf("unsigned %2.3u tratata\n", mint);
//////    printf("unsigned %2.3u tratata\n", mint);
////    unsigned int *ptr = &mint;
////    printf("\nPOINTERS\n");
////    ft_printf("unsigned %2p tratata\n", ptr);
////   printf("unsigned %2p tratata\n", ptr);
//
//    // int i = 1;
//    // while(1)
//    // {
//    //    i++;
//    // }
}