/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avondale <avondale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:14:54 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/22 00:53:14 by avondale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjukmong <tjukmong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:23:53 by tjukmong          #+#    #+#             */
/*   Updated: 2022/09/13 22:35:34 by tjukmong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts integer into array or chars (stringify).

static int	ft_num_length(int n)
{
	int	len;

	len = 1;
	if (n < 0 && len++)
		n = -n;
	while (n > 9 && len++)
		n /= 10;
	return (len);
}

static void	ft_setchr(char *str, int n, int len)
{
	int	stop;

	stop = 0;
	if (n < 0)
	{
		n = -n;
		stop = 1;
		str[0] = '-';
	}
	while (len > stop)
	{
		str[--len] = '0' + (n % 10);
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == -2147483648)
	{
		res = malloc(12 * sizeof(char));
		if (!res)
			return (NULL);
		res[11] = '\0';
		ft_memcpy(res, "-2147483648", sizeof(char) * 11);
		return (res);
	}
	len = ft_num_length(n);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len] = '\0';
	ft_setchr(res, n, len);
	return (res);
}


/* int     main() */
/* { */

/*     printf("result = %s\n", ft_itoa(123456)); */
/*     printf("result = %s\n", ft_itoa(-123456)); */
/*     return 0; */
/* } */
