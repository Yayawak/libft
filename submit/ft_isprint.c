/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:14:15 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 14:14:43 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(unsigned char c)
{
	if ((c >= 0 && c <= 31) || (c == 127))
		return (0);
	return (1);
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
