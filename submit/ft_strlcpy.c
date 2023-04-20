/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:56:05 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 14:57:09 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* size_t  ft_slen(char* s) */
/* { */
/*     int i; */

/*     i = 0; */
/*     while (*s != '\0') */
/*     { */
/*         s++; */
/*         i++; */
/*     } */
/*     return (i); */
/* } */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	if (!dst || !src)
		return (0);
	srcsize = ft_strlen((char *)src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

/* int main() */
/* { */
/*     char* strA = "Hakama"; */
/*     /1* char* strB = "reality"; *1/ */
/*     /1* char* buffer = (char *)malloc(sizeof(char) * 9); *1/ */
/*     int size = 9; */
/*     char    buffer[size]; */
/*     int ret_l = ft_strlcpy(buffer, strA, 4); */
/*     puts(buffer); */
/*     printf("ret_l = %d\n", ret_l); */
/* } */
