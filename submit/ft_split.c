/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:49 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/24 22:42:29 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static int	ft_words_count(char const *s, char sep)
{
	char	*str;
	int		words_count;
	int		flag;

	str = (char *) s;
	words_count = 0;
	flag = 0;
	while (*str)
	{
		if (*str != sep && !flag)
		{
			words_count++;
			flag = 1;
		}
		else if (*str == sep && flag)
			flag = 0;
		str++;
	}
	return (words_count);
}

static char	**free_str_arr(char **s)
{
	int	i;

	i = -1;
	while (s[++i])
		free(s[i]);
	free(s);
	return (NULL);
}

char	**ft_inner_split(char **splited, char *str, char sep, int words_count)
{
	int	i;
	int	sub_word_len;

	i = 0;
	sub_word_len = 0;
	while (i < words_count)
	{
		if (*str && *str != sep)
			sub_word_len++;
		else if (sub_word_len != 0)
		{
			splited[i] = malloc(sizeof(char) * (sub_word_len + 1));
			if (!splited[i])
				return (free_str_arr(splited));
			ft_memcpy(splited[i], str - sub_word_len, sub_word_len);
			splited[i][sub_word_len] = '\0';
			i++;
			sub_word_len = 0;
		}
		str++;
	}
	return (splited);
}

char	**ft_split(char const *s, char sep)
{
	char	**splited;
	char	*start_ptr;
	int		words_count;

	if (!s)
		return (NULL);
	start_ptr = (char *)s;
	words_count = ft_words_count(s, sep);
	splited = malloc(sizeof(char *) * (words_count + 1));
	if (!splited)
		return (NULL);
	splited[words_count] = NULL;
	return (ft_inner_split(splited, start_ptr, sep, words_count));
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
