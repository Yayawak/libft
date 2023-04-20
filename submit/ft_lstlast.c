#include "../../includes/libft.h"

/* t_list *    ft_lstlast(t_list *lst) */
/* { */
/*     t_list *    prev; */

/*     if (!lst) */
/*         return (NULL); */
/*     while (lst) */
/*     { */
/*         prev = lst; */
/*         lst = lst->next; */
/*     } */
/*     return (prev); */
/* } */

t_list *    ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
    /* while (lst) */
    while (lst->next)
    /* while (lst->next != NULL) */
        lst = lst->next;
    return (lst);
}

/* int main() */
/* { */
/*     t_list *    n1 = ft_lstnew("first"); */
/*     t_list *    n2 = ft_lstnew("second"); */
/*     t_list *    n3 = ft_lstnew("third"); */
/*     t_list *    n4 = ft_lstnew("fouth"); */

/*     ft_lstadd_front(&n4, n3); */
/*     ft_lstadd_front(&n3, n2); */
/*     ft_lstadd_front(&n2, n1); */

/*     printf("1 : %s\n", (char *)(n1->content)); */
/*     printf("2 : %s\n", (char *)(n1->next->content)); */
/*     printf("3 : %s\n", (char *)(n1->next->next->content)); */
/*     printf("4 : %s\n", (char *)(n1->next->next->next->content)); */

/*     printf("The content of last node is %s\n", (char *)( */
/*                 ft_lstlast(n1)->content */
/*                 )); */
/*     printf("The address  of last node is %p\n", (char *)(ft_lstlast(n1))); */

/*     return (0); */
/* } */
