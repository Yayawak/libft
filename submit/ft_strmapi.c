/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:58:39 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 14:59:29 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tmp;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = -1;
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (NULL);
	while (++i < len)
	{
		tmp[i] = f(1, s[i]);
	}

	tmp[len] = '\0';
	return (tmp);
}

// char    ceasarShift(unsigned int n, char c)
// {
// 	return (c + n);
// }

/* int main() */
/* { */
/*     char *  str = "biom under world"; */
/*     char *  new_str = ft_strmapi(str, ceasarShift); */
/*     printf("orginal = %s\n", str); */
/*     printf("modify  = %s\n", new_str); */
/* } */
