/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:11:59 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 14:12:57 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import "libft.h"


/* int main(int argc, char** argv) */
/* { */
/*     char    c; */

/*     if (argc == 2) */
/*     { */
/*         /1* c = **argv; *1/ */
/*         printf("*argv[0] = %c", *argv[0]); // name of program */
/*         printf("*argv[1] = %c", *argv[1]); */
/*         c = *argv[1]; */
/*     } */
/*     printf("Number of argc = %d\n", argc); */
/*     printf("%d\n", ft_isalpha(c)); */

/*     return (0); */
/* } */

int	ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

