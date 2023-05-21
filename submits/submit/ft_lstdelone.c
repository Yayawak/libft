/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:29:05 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/24 22:54:05 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// pointer to function 'del' that takes a void pointer as argument
// only free content
// dont free 'next' attribute
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}

/* void    del_content(void *content) */
/* { */
/*     free(content); */
/* } */

/* int main() */
/* { */
/*     t_list  *n1 = ft_lstnew("Hello"); */
/*     t_list  *n2 = ft_lstnew("World"); */

/*     ft_lstadd_back(&n1, n2); */

/*     printf("n1 = %s\n", (char *)(n1->content)); */
/*     printf("n2 = %s\n", (char *)(n2->content)); */

/*     ft_lstdelone(n1, del_content); */
/*     ft_lstdelone(n2, del_content); */
/*     printf("freed"); */

/*     /1* printf("n1 = %s\n", (char *)(n1->content)); *1/ */
/*     /1* printf("n2 = %s\n", (char *)(n2->content)); *1/ */
/* } */
