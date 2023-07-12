#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*joiner;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	joiner = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (joiner == NULL)
		return (NULL);
	joiner[l1 + l2] = '\0';
	while (l2-- > 0)
		joiner[l1 + l2] = s2[l2];
	while (l1-- > 0)
		joiner[l1] = s1[l1];
	return (joiner);
}

char    *c2s(char c)
{
    char    *s;
    s = malloc(sizeof(char) * 2);
    s[0] = c;
    s[1] = 0;
    return s;
}

void    special_print(char *s)
{
    while (*s)
    {
        if (*s == '\n')
            printf("\\n");
        else
            printf("%c", *s);
        s++;
    }
    printf("\n");
}

t_node	*new_node(char *content)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;

	return (node);
}

void	enq(t_q *q, t_node *new_node)
{
	if (q->head == NULL)
	{
		q->head = new_node;
		q->rear = new_node;
		return;
	}
	q->rear->next = new_node;
	q->rear = new_node;
}

t_node	*deq(t_q *q)
{
	t_node	*tmp;

	if (!q)
		return NULL;
	if (q->head == NULL)
		return NULL;
	tmp = q->head;
	q->head = q->head->next;
	if (q->head == NULL)
		q->rear = NULL;
	return tmp;
}

void	display_q(t_q	*q)
{
	t_node	*cur;

	printf("======= START Display Q ============\n");
	if (q == NULL)
	{
		printf("Q is NULL.\n");
		// printf("X\n");
		return ;
	}
	// printf("X\n");
	if (q->head == NULL)
	{
		printf("Q Head is NULL\n");
		return ;
	}
	cur = q->head;
	int i = 0;
	while (cur)
	{
		int j = 0;
		// if (cur->content)
		// 	// printf("q content %d is : %s\n", i, cur->content);
		printf("q content %d is : ", i);
		while (cur->content[j])
		{
			if (cur->content[j] == '\n')
				printf("\\n");
			else
				printf("%c", cur->content[j]);
			j++;
		}
		printf("\n");

		cur = cur->next;
		i++;
	}
	// printf("\n");
	printf("======= END Display Q ============\n");
	printf("\n\n");
}

t_q	*init_q(t_node *head)
{
	t_q	*q;

	q = malloc(sizeof(t_q));
	q->head = head;
	q->rear = head;
	return (q);
}

void    allocline(char **line, t_q *q)
{
    size_t  linelen;
	// linelen = 1; // for \n
	linelen = 0; // for \n
	while (q->head->content[linelen] != '\n')
		linelen++;
	linelen++;
	*line = malloc(sizeof(char) * (linelen + 1));
	// (*line)[linelen] = '\n';
	// (*line)[++linelen] = 0;
}

void	freenode(t_node *n)
{
	/* free(n->content); */
	/* free(n); */
}

void    freeq(t_q *q2free)
{
	// t_node 	*n;

	// n = q2free->head;
	// q2free->head = n;


    t_node  *cur;

    cur = deq(q2free);
    while (cur)
    {
        freenode(cur);
        cur = deq(q2free);
    }
    free(q2free);
}
