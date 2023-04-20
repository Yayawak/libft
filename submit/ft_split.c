/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:49 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 18:18:10 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*start;
	char	*end;
	char	**str_arr;
	int		sep_count;
	int		i;

	start = (char *)s;
	sep_count = 0;
	while (*s++)
		if (*s == c)
			sep_count++;
	str_arr = (char **)malloc(sizeof(char *) * (sep_count + 1));
	i = -1;
	while (++i <= sep_count)
	{
		end = ft_strchr(start, c);
		if (!end)
			end = (char *)(s + ft_strlen(s));
		str_arr[i] = (char *)malloc((end - start) + 1);
		if (!str_arr[i])
			return (NULL);
		memcpy(str_arr[i], start, (end - start));
		start = end + 1;
	}
	return (str_arr);
}

/* int main() */
/* { */
/*     /1* char *  cols = "Name,AttackDamage,MoveSpeed,Class"; *1/ */
/*     char *  cols = "Name,,AttackDamage,MoveSpeed,Class UUID, UML, FIGMA,"; */
/*     /1* char *  cols = "Name,,AttackDamage,MoveSpeed,Class"; *1/ */
/*     char    sep = ','; */
/*     char ** str_arr = ft_split(cols, sep); */

/*     for (int i = 0; str_arr[i] != NULL; i++) */
/*     { */
/*         printf("element[%d] = %s\n", i, str_arr[i]); */
/*     } */
/* } */
