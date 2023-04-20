/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:04:18 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 15:04:29 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(unsigned int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 'b' - 'B';
	}
	return (c);
}

/*
#include "stdio.h"
int main()
{
	unsigned char   c = 'B';
	int             loweredC = ft_tolower(c);
	printf("From %c to %c\n", c, loweredC);
}
*/
