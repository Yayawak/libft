/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avondale <avondale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:26:13 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/21 23:59:17 by avondale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\r'
		|| c == '\f' || c == '\v' || c == ' ')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sum_digits;
	int		sign;

	sum_digits = 0;
	sign = 1;
	i = 0;
	while (is_space(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		sum_digits = (sum_digits * 10) + (str[i] - '0');
		i++;
	}
	return (sum_digits * sign);
}


// int	main()
// {
// 	char	*s = "-123F";
// 	printf("init number = %s\n", s);
// 	int n = ft_atoi(s);
// 	printf("number from ft_atoi = %d\n", n);
// }
