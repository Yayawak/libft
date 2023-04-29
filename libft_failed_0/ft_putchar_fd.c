/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 22:44:30 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/24 22:44:34 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/* int main() */
/* { */
/*     int fd; */

/*     fd = open("output.txt", O_WRONLY | O_CREAT, 0644); */
/*     ft_putchar_fd('a', fd); */
/*     close(fd); */
/*     /1* ft_putchar_fd('a', 1); *1/ */
/* } */
