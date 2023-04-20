#include "../../includes/libft.h"

// behavior of f is 1) return void * or maybe char *
// 2) reciever void * as argument
t_list   *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *newLst;
    t_list  *newNode;

    if (!lst || !f || !del)
        return (NULL);

    newLst = NULL;
    while (lst)
    {
        newNode = ft_lstnew(f(lst->content));
        if (!newNode)
        {
            ft_lstclear(&newLst, del);
            return (NULL);
        }
        if (!newLst)
            newLst = newNode;
        else
            ft_lstadd_back(&newLst, newNode);
        lst = lst->next;
    }
    return (newLst);
}

/* char    *capitalize(char * s) */
void    *capitalize(void * svoid)
{
    char *s = (char *)svoid;
    short int   i;
    char    c;
    size_t  len;
    char    *new;

    len = 0;
    while (s[len])
        len++;
    new = (char *)malloc(sizeof(char) * (len + 1));

    i = 0;
    while (s[i])
    {
        c = s[i];
        if (i == 0 && (c >= 'a' && c <= 'z'))
            c -= 'a' - 'A';
        new[i] = c;
        i++;
    }
    new[len] = '\0';

    return (new);
}

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

/*     /1* t_list *newLst = ft_lstmap(n1, (void *(*)(void *))capitalize, free); *1/ */
/*     t_list *newLst = ft_lstmap(root, capitalize, free); */
/*     while (newLst) */
/*     { */
/*         printf("content of new list = %s\n", (char *)(newLst->content)); */
/*         newLst = newLst->next; */
/*     } */


/*     return (0); */
/* } */
