/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avondale <avondale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:51:30 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/23 17:16:14 by avondale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*joiner;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	joiner = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (joiner == NULL)
		return (NULL);
	joiner[l1 + l2] = '\0';
	while (l2-- > 0)
		joiner[l1 + l2] = s2[l2];
	while (l1-- > 0)
		joiner[l1] = s1[l1];
	return (joiner);
}

// int main()
// {
//     char *  s1 = "Euler circuit";
//     char *  s2 = "Halmilton circuit";

//     char *  p = ft_strjoin(s1, s2);
//     printf("s1 : %s\n", s1);
//     printf("s2 : %s\n", s2);
//     printf("res : %s\n", p);
// }
