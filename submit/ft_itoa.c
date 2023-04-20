/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:14:54 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 18:18:37 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_number_size(int n, int size)
{
	if (n <= 0)
		return (size);
	return (get_number_size(n / 10, size + 1));
}


char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		is_neg;

	is_neg = 0;
	len = 1;
	len += get_number_size(n, 0);
	if (n < 0)
	{
		is_neg = 1;
		n = -n;
	}
	str = (char *)malloc(sizeof(char) * (len + 1 + is_neg));
	str[len + is_neg] = '\0';
	while (len--)
	{
		str[len + is_neg] = n % 10 + '0';
		n /= 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}


/* int     main() */
/* { */

/*     printf("result = %s\n", ft_itoa(123456)); */
/*     printf("result = %s\n", ft_itoa(-123456)); */
/*     return 0; */
/* } */
