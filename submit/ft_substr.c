/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avondale <avondale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:03:33 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/22 14:20:06 by avondale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

// len is expected to be len of s or plus lenght of wanted how long
/* char    *ft_substr(char const *s, unsigned int start, size_t len) */
/* { */
/*     /1* malloc(); *1/ */
/*     char    *new_str; */
/*     size_t  i; */
/*     size_t  j; */

/*     new_str = (char *)malloc(len + 1); */
/*     /1* new_str = (char *)malloc((sizeof(s) * (len + 1))); *1/ */
/*     if (!s || !new_str) */
/*         return (0); */
/*     i = start; */
/*     j = 0; */
/*     while (i < ft_strlen(s) && j < len) */
/*         new_str[j++] = s[i++]; */
/*     // append end \0 to my new text */
/*     new_str[j] = '\0'; */
/*     return (new_str); */
/* } */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	size_t	substr_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	substr_len = 0;
	while (s[start + substr_len] && substr_len < len)
		substr_len++;
	substr = (char *)malloc(sizeof(char) * (substr_len + 1));
	if (!substr)
		return (NULL);
	i = -1;
	while (++i < substr_len)
		substr[i] = s[start + i];
	substr[substr_len] = '\0';
	return (substr);
}

// int	main()
// {
// 	char	*s = "01234";
// 	size_t	size = 10;
// 	char	*ret1 = ft_substr(s, 10, size);

// 	printf("%s\n", ret1);
// 	// int n = strncmp(ret1, "", 1);
// 	// printf("value from strncmp = %d\n", n);
// 	// if (!strncmp(ret1, "", 1))
// 	// {
// 		// free(ret1);
// 	// }
// 	// free(ret1);
// 	// char	*ret2 = strncmp(s, 10, size);
// }

// /* int main(int argc, char** argv) */
// /* { */
// /*     char    *str = "Axios espresso pretonum"; */
// /*     if (argc == 1) */
// /*         printf("provide start index to sub string (%s)\n", str); */
// /*     unsigned int    sub_at = 5; */

// /*     size_t          plus_len = 4; */
// /*     if (*argv[1]) */
// /*         sub_at = *argv[1] - '0'; */
// /*     if (*argv[2]) */
// /*         plus_len = atoi(argv[2]); */
// /*         /1* sub_at = *argv[1]; *1/ */
// /*     char    *sub_str = ft_substr(str, sub_at, plus_len); */
// /*     printf("full str : %s\nsub_at : %d\nsub str : %s\n", */
// /*             str, sub_at, sub_str); */
// /* } */
