/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 22:44:53 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/24 22:45:06 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (!s || fd < 0)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
}
/* { */
/*     int fd = open("output.txt", O_WRONLY); */
/*     printf("%d\n", fd); */
/*     ft_putstr_fd("strint string sprint spronk", fd); */
/*     return 0; */
/* } */
