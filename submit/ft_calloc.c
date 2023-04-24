/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avondale <avondale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:28:32 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/22 14:39:34 by avondale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		total_size;
	void	*ptr;

	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
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
