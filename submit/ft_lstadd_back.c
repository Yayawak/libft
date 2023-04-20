/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:24:38 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 14:25:35 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void    ft_lstadd_back(t_list **lst, t_list *new) */
/* { */
/*     while (*lst) */
/*     { */
/*         *lst = (*lst)->next; */
/*     } */
/*     (*lst)->next = new; */
/* } */

/* void    ft_lstadd_back(t_list **lst, t_list *new) */
/* { */
/*     t_list  *tmp; */

/*     if (!new) */
/*         return ; */
/*     if (!*lst) */
/*     { */
/*         *lst = new; */
/*         return ; */
/*     } */
/*     tmp = *lst; */
/*     while (tmp->next) */
/*     { */
/*         tmp = tmp->next; */
/*     } */
/*     tmp->next = new; */
/* } */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

/* int main() */
/* { */
/*     t_list *    n1 = ft_lstnew("first"); */
/*     t_list *    n2 = ft_lstnew("second"); */
/*     t_list *    n3 = ft_lstnew("third"); */
/*     t_list *    n4 = ft_lstnew("fouth"); */

/*     /1* ft_lstadd_front(&n4, n3); *1/ */
/*     /1* ft_lstadd_front(&n3, n2); *1/ */
/*     /1* ft_lstadd_front(&n2, n1); *1/ */


/*     /1* printf("The content of last node is %s\n", (char *)( *1/ */
/*     /1*             ft_lstlast(n1)->content *1/ */
/*     /1*             )); *1/ */
/*     /1* printf("The address  of last node is %p\n",
 (char *)(ft_lstlast(n1))); *1/ */
/*     t_list  **root_ptr = &n1; */

/*     ft_lstadd_back(root_ptr, n2); */
/*     ft_lstadd_back(root_ptr, n3); */
/*     ft_lstadd_back(root_ptr, n4); */

/*     printf("1 : %s\n", (char *)(n1->content)); */
/*     printf("2 : %s\n", (char *)(n1->next->content)); */
/*     printf("3 : %s\n", (char *)(n1->next->next->content)); */
/*     printf("4 : %s\n", (char *)(n1->next->next->next->content)); */



/*     return (0); */
/* } */
