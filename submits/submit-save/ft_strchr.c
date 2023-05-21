/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:48:48 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 14:49:51 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

/* int main() */
/* { */
/*     char* str = "Templar hanami"; */

/*     char    c = 'p'; */
/*     char* p = ft_strchr(str, c); */
/*     printf("pointer of %c in string %s = %p\n", */
/*             c, */
/*             str, */
/*             p); */
/*     puts(p); */
/*     return (0); */
/* } */
