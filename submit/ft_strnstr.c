/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:00:28 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 15:01:25 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locate first occurence of the null-termianted string
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0')
	{
		n = 0;
		while (
			haystack[h + n] == needle[n]
			&& (h + n) < len)
		{
			if (haystack[h + n] == '\0' &&
				needle[n] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}

// int main()
// {
// 	/* char    *haystack = "Hey hay hey haystack and heedle"; */
// 	char    *haystack = "hello needle";
// 	char    *needle = "needle";
// 	printf("haystack is : %s\nneedle is : %s\nlocation found is : %p\n",
// 			haystack, needle,
// 			ft_strnstr(haystack, needle, 12)
// 			);
// }
