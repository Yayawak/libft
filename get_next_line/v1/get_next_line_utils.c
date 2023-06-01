#include "get_next_line.h"
#include <stdio.h>

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

// ? find \n
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

int	is_nl_in_lstlast(t_list *stash)
{
	int		i;
	t_list	*current;

	if (stash == NULL)
		return (0);
	current = ft_lst_get_last(stash);
	i = 0;
	while (current->content[i])
	{
		if (current->content[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

void	allocline_bystash(char **line, t_list *stash)
{
	int		i;
	size_t	linelen;

	linelen = 0;
	while (stash)
	{
		i = 0;
		while (stash->content[i])
		{
			if (stash->content[i] == '\n')
			{
				// special add len
				linelen++;
				break ;
			}
			linelen++;
			i++;
		}
		stash = stash->next;
	}
	// line[linelen] = 0;
	// line[linelen] = NULL;
	// *line[linelen] = '\0';
	*line = malloc(sizeof(char) * (linelen + 1));
}

t_list	*ft_lst_get_last(t_list *stash)
{
	t_list	*cur;

	cur = stash;
	while (cur && cur->next)
		cur = cur->next;
	return (cur);
}

t_list	*ft_lstnew(char *content)
{
	t_list	*root;

	root = (t_list *)malloc(sizeof(t_list));
	if (!root)
		return (0);
	root->content = content;
	root->next = NULL;

	return (root);
}

void	free_stash(t_list *stash)
{
	t_list	*cur;
	t_list	*nxt;

	cur = stash;
	while (cur)
	{
		free(cur->content);
		nxt = cur->next;
		free(cur);
		cur = cur->next;
	}
}
