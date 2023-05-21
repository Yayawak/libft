/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avondale <avondale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:58:09 by ajordan-          #+#    #+#             */
/*   Updated: 2023/05/10 12:56:26 by avondale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_printchar(va_arg(args, int));
	// else if (format == 's')
	// 	print_length += ft_printstr(va_arg(args, char *));
	// else if (format == 'p')
	// 	print_length += ft_print_ptr(va_arg(args, unsigned long long));
	// else if (format == 'd' || format == 'i')
	// 	print_length += ft_printnbr(va_arg(args, int));
	// else if (format == 'u')
	// 	print_length += ft_print_unsigned(va_arg(args, unsigned int));
	// else if (format == 'x' || format == 'X')
	// 	print_length += ft_print_hex(va_arg(args, unsigned int), format);
	// else if (format == '%')
	// 	print_length += ft_printpercent();
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}

int main(void)
{
    // ft_printf("hello world%c\n", 'k', '5');
    // ft_printf("hello world%c\n", "55", "kk");
    // ft_printf("hello world %c \n", '9', "kk");
    // ft_printf("hello world %c\t:number is %d \n", '9', -125);
    // ft_printf( "%c, %c, %c\n", '1', '9', '5');
    ft_printf( "%c, %c, %c\n", '3', '9', '5');
    // ft_printf(
    //     // "hello world\n\t character is %c\n\t:number is %d\n\t:string %s \n",
    //     "char : %c\n\t num : %d\n\t str : %s \n",
    //      '9',
    //     -125,
    //     "string stranger things"
    // );
    // printf("----------------------------------------");
    // printf("hello world%c\n", '9', "kk");

    return (0);
}
