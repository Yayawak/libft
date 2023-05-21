/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:50:52 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 14:51:19 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void    print_char_index(unsigned int index, char *c)
// {
//     printf("Character \"%c\" at index \"%d\"\n", *c, index);
// }

// int main()
// {
//     char *  s = "function lambda is not available ?";
//     ft_striteri(s, print_char_index);
// }
