/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avondale <avondale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:11:59 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/23 17:14:45 by avondale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


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

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

