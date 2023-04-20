/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:28:30 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 14:28:56 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (*lst)
	{
		ft_lstclear(&((*lst)->next), del);
		ft_lstdelone(*lst, del);
		lst = NULL;
	}
}

/* int main() */
/* { */
/*     t_list *    n1 = ft_lstnew("first"); */
/*     t_list *    n2 = ft_lstnew("second"); */
/*     t_list *    n3 = ft_lstnew("third"); */
/*     t_list *    n4 = ft_lstnew("fouth"); */


/*     t_list  **root_ptr = &n1; */

/*     ft_lstadd_back(root_ptr, n2); */
/*     ft_lstadd_back(root_ptr, n3); */
/*     ft_lstadd_back(root_ptr, n4); */

/*     printf("1 : %s\n", (char *)(n1->content)); */
/*     printf("2 : %s\n", (char *)(n1->next->content)); */
/*     printf("3 : %s\n", (char *)(n1->next->next->content)); */
/*     printf("4 : %s\n", (char *)(n1->next->next->next->content)); */

/*     ft_lstclear(root_ptr, free); */

/*     printf("1 : %s\n", (char *)(n1->content)); */
/*     printf("2 : %s\n", (char *)(n1->next->content)); */
/*     printf("3 : %s\n", (char *)(n1->next->next->content)); */
/*     printf("4 : %s\n", (char *)(n1->next->next->next->content)); */

/*     return (0); */
/* } */
