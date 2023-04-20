/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:01:44 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 15:02:21 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char *  ft_strrchr(const char *s, int c) */
/* { */
/*     unsigned int    i; */
/*     const char      *init; */

/*     init = s; */
/*     i = ft_strlen(s); */
/*     s = (s + i); // Why ? */

/*     while (c != *s && *s != *init) */
/*     { */
/*         s--; */
/*         if (c == *s) */
/*             return ((char *)s); */
/*     } */
/*     return (0); */
/* } */

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = ft_strlen(s) - 1;

	while (i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)s);
		}
		i--;
	}
	return (0);
}

// int main()
// {
// 	/* char*   str = "You must write your funcion impolementatin"; */
// 	char*   str = "You Funk";
// 	char    c = 'F';
// 	printf("str : %s\nsearch char : %c\nlocation index : %p",
// 			str,
// 			c,
// 			ft_strrchr(str, c)
// 		) ;
// }
