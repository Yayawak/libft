/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avondale <avondale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:01:44 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/21 02:20:54 by avondale         ###   ########.fr       */
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
	const char	*p;

	p = s;
	p += ft_strlen(s);
	while (p >= s)
	{
		if (*p == (char) c)
			return ((char *)p);
		p--;
	}
	return (NULL);
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
