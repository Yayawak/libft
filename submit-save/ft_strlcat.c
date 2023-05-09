/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avondale <avondale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:55:53 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/22 14:34:22 by avondale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const char	*_dst;
	const char	*_src;
	size_t		n;
	size_t		dlen;

	_dst = dst;
	_src = src;
	n = dstsize;
	while (n-- > 0 && *dst)
		dst++;
	dlen = dst - _dst;
	n = dstsize - dlen;
	if (n-- == 0)
		return (dlen + ft_strlen(src));
	while (*src)
	{
		if (n > 0)
		{
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';
	return (dlen + (src - _src));
}

/*
int    main()
{
    char *first = "This This is ";
    char last[] = "a potentially long string";
    int size = 64;
    char buffer[size];

    strcpy(buffer, first);
    int r = ft_strlcpy(buffer, last, size);
    printf("r = %d\n", r);
    printf("Buffer = %s", buffer);
    return (0);
}
*/
