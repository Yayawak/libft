#include "../../includes/libft.h"

/* struct s_list *    ft_lstnew(void *content) */
/* t_list *    ft_lstnew(void *content) */
/* { */
/*     t_list *  root; */

/*     root = (t_list *)malloc(sizeof(t_list)); */
/*     if (root == NULL) */
/*         return (NULL); */
/*     // must deref the content otherwise it's sizeof pointer = 8 bytes */
/*     /1* root->content = malloc(sizeof(*content)); *1/ */
/*     /1* if (root->content == NULL) *1/ */
/*         /1* return (NULL); *1/ */
/*     ft_memcpy(root->content, content, sizeof(*content)); */
/*     /1* memcpy(root->content, content, sizeof(*content)); *1/ */
/*     root->next = NULL; */

/*     return (root); */
/* } */

t_list *    ft_lstnew(void *content)
{
    t_list *    root;

    root = (t_list *)malloc(sizeof(t_list));
    if (!root)
        return (0);
        /* return (NULL); */
    // no need to malloc for content because content already exist on some address we don't need to duplicate it we want to 'link' it !
    root->content = content;
    root->next = NULL;

    return (root);
}

/* int main() */
/* { */
/*     char *  str = "okOK"; */
/*     t_list *    n = ft_lstnew(str); */
/*     /1* char *  content = n->content; *1/ */
/*     char *  content = (char *)(n->content); */

/*     /1* char    c = 'H'; *1/ */
/*     /1* t_list *    n = ft_lstnew(&c); *1/ */
/*     /1* /2* char    content = *(n->content); *2/ *1/ */
/*     /1* char    content = (char)(*(n->content)); *1/ */
/*     /1* char    content = *(n->content); *1/ */
/*     /1* char    content = *(char *)(n->content); *1/ */
/*     /1* char    content = *(n->content); *1/ */


/*     /1* printf("content of list is : %c\n", content); *1/ */
/*     printf("content of list is : %s\n", content); */
/*     printf("sizeof(t_list) is %zu\n", sizeof(struct s_list)); */
/*     return 0; */
/* } */
