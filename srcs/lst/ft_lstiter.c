#include "../../includes/libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!f || ! lst)
        return ;
    if (lst)
    {
        f(lst->content);
        ft_lstiter(lst->next, f);
    }
}

void    capitalize(char * s)
/* void    capitalize(void *s) */
{
    s = (char *)s;
    size_t  i;
    char    c;

    i = 0;
    while (s[i])
    {
        c = s[i];
        if (i == 0 && (c >= 'a' && c <= 'z'))
            c -= 'a' - 'A';
        printf("%c", c);
        i++;
    }
    printf("\n");
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

/*     printf("After iteratoin\n"); */

/*     ft_lstiter(n1, (void(*)(void *))capitalize); */

/*     return (0); */
/* } */
