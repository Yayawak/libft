#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	is_nl_in_rear(t_q *q)
{
	size_t	i;

	if (q == NULL || q->rear == NULL)
	// if (q == NULL || q->rear == NULL || q->rear->content == NULL)
		return (0);
	i = 0;
	while (q->rear->content[i])
	{
		if (q->rear->content[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	is_nl_in_head(t_q *q)
{
	size_t	i;
	char	*content;

	if (q == NULL || q->head == NULL)
		return (0);
	// if (q->head == NULL)
	// 	return (0);
	content = q->head->content;
	while (content[i])
	{
		if (content[i] == '\n')
			return (1);
		i++;
	}
	return (0);
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

	if (q->head == NULL)
	{
		// printf("Q is empty (no head point to.)\n");
		return NULL;
	}
	tmp = q->head;
	q->head = q->head->next;
	if (q->head == NULL)
		q->rear = NULL;
	return tmp;
}

void	display_q(t_q	*q)
{
	t_node	*cur;

	if (q == NULL)
	{
		printf("Q is NULL.\n");
		return ;
	}
	if (q->head == NULL)
	{
		printf("Q Head is NULL\n");
		return ;
	}
	cur = q->head;
	printf("======= START Display Q ============\n");
	int i = 0;
	while (cur->next)
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

// t_q	*init_q()
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
    t_node  *cur;
    size_t  linelen;
    size_t  i_subnode;

    cur = q->head;
    linelen = 0;
    // concept of Q : first in is old line (first line)
    // so if we want to get it's we encounter in front
    while (cur)
    {
        i_subnode = 0;
        while (cur->content[i_subnode])
        {
            if (cur->content[i_subnode] == '\n')
            {
                // for malloc \n in returned line
                linelen++;
                goto exit_loop;
            }
            linelen++;
            i_subnode++;
        }
        cur = cur->next;
    }
    exit_loop:
    *line = malloc(sizeof(char) * (linelen + 1));
    (*line)[linelen - 1] = '\n';
    (*line)[linelen] = 0;
}


// int main()
// {
//     t_node *root;
//     t_node *n2;
//     t_node *n3;
//     t_node *new;

// 	t_q	*q;
// 	q = malloc(sizeof(t_q));
// 	q->head = NULL;
// 	// q->head;
// 	// q->rear = NULL;

// 	// root->content = "aaaaaaaaaaa";

// 	// enq(q, root);

// 	// display_q(q);
// }
