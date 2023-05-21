/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:32:48 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/24 22:57:31 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// behavior of f is 1) return void * or maybe char *
// 2) reciever void * as argument
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		if (!new_lst)
			new_lst = new_node;
		else
			ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/* char    *capitalize(char * s) */
// void    *capitalize(void * svoid)
// {
//     char *s = (char *)svoid;
//     short int   i;
//     char    c;
//     size_t  len;
//     char    *new;

//     len = 0;
//     while (s[len])
//         len++;
//     new = (char *)malloc(sizeof(char) * (len + 1));

//     i = 0;
//     while (s[i])
//     {
//         c = s[i];
//         if (i == 0 && (c >= 'a' && c <= 'z'))
//             c -= 'a' - 'A';
//         new[i] = c;
//         i++;
//     }
//     new[len] = '\0';

//     return (new);
// }

/* int main() */
/* { */
/*     t_list *    n1 = ft_lstnew("first"); */
/*     t_list *    n2 = ft_lstnew("second"); */
/*     t_list *    n3 = ft_lstnew("third"); */
/*     t_list *    n4 = ft_lstnew("fouth"); */

/*     t_list  *root= NULL; */

/*     ft_lstadd_back(&root, n1); */
/*     ft_lstadd_back(&root, n2); */
/*     ft_lstadd_back(&root, n3); */
/*     ft_lstadd_back(&root, n4); */

/*     printf("1 : %s\n", (char *)(root->content)); */
/*     printf("2 : %s\n", (char *)(root->next->content)); */
/*     printf("3 : %s\n", (char *)(root->next->next->content)); */
/*     printf("4 : %s\n", (char *)(root->next->next->next->content)); */

/*     printf("After mapping\n"); */

/*     /1* t_list *new_lst = ft_lstmap(n1, 
(void *(*)(void *))capitalize, free); *1/ */
/*     t_list *new_lst = ft_lstmap(root, capitalize, free); */
/*     while (new_lst) */
/*     { */
/*         printf("content of new list = %s\n", (char *)(new_lst->content)); */
/*         new_lst = new_lst->next; */
/*     } */

/*     return (0); */
/* } */
