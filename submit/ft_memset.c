/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:42:45 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 14:43:29 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*p;

	p = b;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (b);
}

// int main()
// {
//     char* str = malloc(6); // 6 byte block
//     size_t len = 6;

//     ft_memset(str, 'x', len);

//     printf("After memset: %s\n", str);
//     free(str);

//     int val = 1234567890;
//     int *p = &val;
//     /* ft_memset(&val, 4, sizeof(val)); */
//     /* ft_memset(&val, 4, 7); */
//     /* ft_memset(p, 'y', 7); */
//     ft_memset(p, (unsigned char)4, 7);
//     printf("value after memset number : %d\n", val);
//     /* printf("value after memset number : %d\n", val); */


//     return 0;
// }
