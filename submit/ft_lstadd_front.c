/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:25:53 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/20 14:27:09 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// insert the new node to be "1st node"
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*root;

	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	root = *lst;

	new->next = root;
	*lst = new;
}

/* int main() */
/* { */
/*     /1* t_list *    n1 = ft_lstnew(&"first"); *1/ */
/*     /1* t_list *    n2 = ft_lstnew(&"second"); *1/ */
/*     t_list *    n1 = ft_lstnew("first"); */
/*     t_list *    n2 = ft_lstnew("second"); */

/*     ft_lstadd_front(&n1, n2); */

/*     printf("1 : %s\n", (char *)(n1->content)); */
/*     printf("2 : %s\n", (char *)(n1->next->content)); */
/*     /1* printf("2 : %s\n", (char *)(++n1->content)); 
/ *1/ // this is not right lol */
/*     /1* printf("2 : %s\n", (char *)(n2->content)); *1/ */

/*     return (0); */
/* } */
