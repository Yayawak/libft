/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:26:13 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 13:53:06 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	power_of_ten(int n)
{
	int	multiplier;

	multiplier = 1;
	while (n-- > 1)
		multiplier *= 10;
	return (multiplier);
}

// if inut = "4032"
int	ft_atoi(const char *str)
{
	size_t	n;
	size_t	i;
	int		sum_digits;

	n = ft_strlen(str);
	sum_digits = 0;

	i = -1;
	while (--i < n)
		sum_digits += (str[i] - '0') * power_of_ten(n - i);

	return (sum_digits);
}


// int	main()
// {
// 	printf("init number = 4032\n");
// 	ft_atoi("4032");
// }
