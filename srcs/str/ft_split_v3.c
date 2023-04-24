/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_v3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avondale <avondale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:49 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/22 14:00:00 by avondale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stddef.h>
#include <stdlib.h>

static int	count_words(const char *str, char sep)
{
	int	n_words;
	int	trigger;

	n_words = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != sep && trigger == 0)
		{
			trigger = 1;
			n_words++;
		}
		else if (*str == sep)
			trigger = 0;
		str++;
	}
	return (n_words);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		idx;
	char	**splited;

	splited = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !splited)
		return (0);
	i = 0;
	j = 0;
	idx = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && idx < 0)
			idx = i;
		else if ((s[i] == c || i == ft_strlen(s)) && idx >= 0)
		{
			splited[j++] = ft_substr(s, idx, i);
			idx = -1;
		}
		i++;
	}
	splited[j] = 0;
	return (splited);
}


// int main()
// {
// 	char *cols = "      split       this for   me  !       ";
// 	printf("sub sub : %s\n", ft_substr(cols, 6, 5));
//     // char *  cols = "Name,AttackDamage,MoveSpeed,Class";
//     // char *  cols = "Name,,AttackDamage,MoveSpeed,Class UUID, UML, FIGMA,";
// 	// char *  cols = "Name,,AttackDamage,MoveSpeed,Class";
// 	char    sep = ' ';
// 	char ** str_arr = ft_split(cols, sep);

// 	for (int i = 0; str_arr[i] != NULL; i++)
// 	{
// 		printf("element[%d] = %s\n", i, str_arr[i]);
// 	}
// }
