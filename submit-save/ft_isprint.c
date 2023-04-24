/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avondale <avondale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:14:15 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/21 02:08:16 by avondale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);

	return (0);
}
/*
#include <stdio.h>
#include <string.h>
#include "ft_isprint.c"

int	main(void)
{
	int i = ft_isprint(1);
    printf("print status : %d
", i);
	return (0);
}*/
