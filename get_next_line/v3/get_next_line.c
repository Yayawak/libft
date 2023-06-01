#include "get_next_line.h"
#include <string.h>

// #define
// typedef struct S_node {
//     char    *content;
//     struct S_node   *next;
// } Node;
typedef struct snode {
    char    *content;
    struct snode *l;
    struct snode *r;
} Node;

typedef struct {
    Node    *root;
} Tree;

// void    postorder(Tree *t)
// {
//     postorder(t->root);
// }
void    postorder(Node *root)
{
    if (root == NULL)
        return ;
    postorder(root->l);
    postorder(root->r);
    // printf("%s ->", root->content);
    // printf("%s ->", root->content);
    int i;

    i = 0;
    while (root->content[i])
    {
        if (root->content[i] == '\n')
            printf("\\n");
        else
            printf("%c", root->content[i]);
        i++;
    }
    printf(" ->");
}

Node    *newnode(char *content)
{
    Node    *new;

    new = malloc(sizeof(Node));
    new->content = content;
    new->r = 0;
    new->r = 0;

    return (new);
}

Tree    *newtree()
{
    Tree    *t;

    t = malloc(sizeof(Tree));
    t->root = NULL;
    return (t);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;

    }
    return (0);
}

// Node    *insertLine(Node *n, char *line)
// void    insertLine(Tree *t, char *line)
// void    insertLine(Tree *t, char *line)
void    insertLine(Node **node, char *line)
{
    int cmp;

    if (*node == NULL)
    {
        *node = newnode(line);
        return ;
    }
    cmp = ft_strcmp(line, (*node)->content);
    if (cmp < 0)
        insertLine(&((*node)->l), line);
    else
        insertLine(&((*node)->r), line);
}

// typedef struct {
//     Node    *head;
//     Node    *tail;
// } CLL;

// Node	*ft_lstnew(char *content)
// {
// 	Node	*root;

// 	root = (Node *)malloc(sizeof(Node));
// 	if (!root)
// 		return (0);
// 	root->content = content;
// 	root->next = NULL;

// 	return (root);
// }

// void    append(CLL *list, const char *line)
// {
//     Node    *new = malloc(sizeof(Node));
// }
static Tree    *t;

void    read_create_stash(int fd)
{
    char    *buff;
    ssize_t readed_bytes;

    readed_bytes = 1;
    while (readed_bytes != 0)
    {
        buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
        if (buff == NULL)
            return ;
        readed_bytes = read(fd, buff, BUFFER_SIZE);
        buff[readed_bytes] = '\0';
        // buff[]

        // insertLine(&(t->root), buff);
        insertLine(&(t->root), strdup(buff));
        // postorder(t->root);

        // printf("buff : %s\n", buff);
        free(buff);
    }
    // postorder(t->root);
    printf("end buff -------------------\n");
}

void    make_3()
{
    if (t == NULL)
        t = newtree();
}

char    *get_next_line(int fd)
{
    char    *line;

    make_3();
    read_create_stash(fd);
    if (line != NULL)
        printf("line is %s\n", line);
    return (line);
}

int main(void)
{
    int fd;

    fd = open("dummy.txt", 0);

    get_next_line(fd);
    // char    *s1 = "Hello";
    // char    *s2 = "Helle";

    // Tree *t = newtree();
    // t->root = newnode("baraka");
    // insertLine(t->root, s1);
    // insertLine(t->root, s2);
    // // int cmp = ft_strcmp(s1, s2);

    postorder(t->root);
    // printf("cmp = %d\n", cmp);

    return (0);
}
