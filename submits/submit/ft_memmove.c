/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:21:33 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/24 22:23:31 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// dest = "hel   "
// src = dest + 2 = "l   "
// n  = 3
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*from;
	unsigned char	*to;

	from = (unsigned char *) src;
	to = (unsigned char *) dest;
	if (from == to || n == 0)
		return (dest);
	if (to > from)
	{
		while (n-- > 0)
			to[n] = from[n];
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}

// int	main()
// {
// 	char	*src;
// 	char	*dest = src + 1;

// 	src = malloc(50);
// 	ft_memcpy(src, "Hello");
// 	printf("%s\n", ft_memmove(dest, src, 2));
// 	free(src);
// 	return (0);
// }