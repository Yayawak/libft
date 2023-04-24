/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:58:39 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/24 22:41:07 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tmp;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	tmp = (char *)malloc(ft_strlen(s) + 1);
	if (!tmp)
		return (NULL);
	i = 0;
	while (s[i])
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
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
