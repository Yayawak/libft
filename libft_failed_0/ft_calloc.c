/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:39:53 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/25 19:40:01 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char		*ptr;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main()
// {
// 	int n_elements = 10;
// 	int ele_size = sizeof(n_elements);
// 	int*   array = (int *)ft_calloc(n_elements, ele_size);

// 	if (array == NULL)
// 	{
// 		printf("Unsucess alloction.\n");
// 		return (1);
// 	}
// 	for (int i = 0; i < n_elements; i++)
// 		printf("%d ", array[i]);
// 	free(array);
// 	return (0);
// }
