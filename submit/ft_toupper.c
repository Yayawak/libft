/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:04:40 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 18:14:37 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 'h' - 'H';
	}
	return (c);
}

// int main()
// {
// 	unsigned char   c = 'B';
// 	int             upperedC = ft_toupper(c);
// 	printf("From %c to %c\n", c, upperedC);
// }
