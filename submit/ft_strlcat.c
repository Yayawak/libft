/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avondale <avondale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:55:53 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/22 00:58:38 by avondale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	c = ft_strlen(dst);
	// if (!dst || !src)
	// if (!src)
		// return (0);
		// return (ft_strlen(src));
	if (dstsize <= c)
		return (dstsize + ft_strlen(src));
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
		dst[c++] = src[d++];
	dst[c] = '\0';
	// return (c + src[d]);
	// return (src[d] - 1);
	// return (ft_strlen(dst) + ft_strlen(&src[d]));
	return (c + ft_strlen(&src[d]));

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
