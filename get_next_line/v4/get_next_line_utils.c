#include "get_next_line.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *stash, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!stash)
	{
		stash = (char *)malloc(1 * sizeof(char));
		stash[0] = '\0';
	}
	if (!stash || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(stash) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (stash)
		while (stash[++i] != '\0')
			str[i] = stash[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(stash) + ft_strlen(buff)] = '\0';
	free(stash);
	return (str);
}

// char	*ft_strjoin(char const *s1, char const *s2)
// char	*ft_strjoin(char *s1, char *s2)
// {
// 	size_t	l1;
// 	size_t	l2;
// 	char	*joiner;

// 	if (!s1 || !s2)
// 		return (NULL);
// 	l1 = ft_strlen(s1);
// 	l2 = ft_strlen(s2);
// 	joiner = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
// 	if (joiner == NULL)
// 		return (NULL);
// 	joiner[l1 + l2] = '\0';
// 	while (l2-- > 0)
// 		joiner[l1 + l2] = s2[l2];
// 	while (l1-- > 0)
// 		joiner[l1] = s1[l1];
// 	return (joiner);
// }
// void    special_print(char *s)
// {
//     int i = 0;

//     while (s[i] != 0)
//     {
//         if (s[i] == '\n')
//         {
//             printf("\\n");
//         }
//         else
//         {
//             printf("%c", s[i]);
//         }
//         i++;
//     }
// }
