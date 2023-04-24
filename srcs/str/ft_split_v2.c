/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_v2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avondale <avondale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:49 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/22 14:21:10 by avondale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdlib.h>

static int	cal_sep_count(const char *s, char c)
{
	int	i;
	int	sep_count;

	i = 0;
	sep_count = 0;
	while (s[i])
	{
		while (s[i + 1] == c)
			i++;
		if (s[i] == c)
			sep_count++;
		i++;
	}
	return (sep_count);
}


static int	sub_str_size(char const *sub, char sep)
{
	int	i;

	i = 0;
	while (sub[i] != sep)
		i++;
	return (i);
}

static char	**alloc_substrs(char const *s, int word_count, char sep)
{
	int	i;
	int	cur_substr_len;
	char	**str_arr;

	str_arr = (char **)malloc(sizeof(char *) * word_count);
	i = 0;
	while (i < word_count)
	{
		cur_substr_len = sub_str_size(&s[i], sep);
		str_arr[i] = (char *)malloc(sizeof(char) * (1 + cur_substr_len));
		if (!str_arr[i])
			return (NULL);
		i++;
		// str_arr[i][cur_substr_len] = '\0';
	}
	return (str_arr);
}
char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	int		word_count;
	int		i;
	int		j;
	int		cur_substr_len;

	word_count = cal_sep_count(s, c) - 1;
	i = 0;
	j = 0;
	str_arr = alloc_substrs(s, word_count, c);
	while (i < (int)ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		cur_substr_len = sub_str_size(&s[i], c);
		str_arr[j] = ft_substr(s, i, cur_substr_len);
		// ft_memcpy(str_arr[j], s - cur_substr_len, cur_substr_len);
		i += cur_substr_len;
		j++;
	}
	str_arr[word_count] = NULL;
	return (str_arr);
}


int main()
{
	char *cols = "      split       this for   me  !       ";
	printf("sub sub : %s\n", ft_substr(cols, 6, 5));
    // char *  cols = "Name,AttackDamage,MoveSpeed,Class";
    // char *  cols = "Name,,AttackDamage,MoveSpeed,Class UUID, UML, FIGMA,";
	// char *  cols = "Name,,AttackDamage,MoveSpeed,Class";
	char    sep = ' ';
	char ** str_arr = ft_split(cols, sep);

	for (int i = 0; str_arr[i] != NULL; i++)
	{
		printf("element[%d] = %s\n", i, str_arr[i]);
	}
}
