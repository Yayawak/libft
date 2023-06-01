#include <stddef.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
    i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

static int	ft_words_count(char const *s, char sep)
{
	char	*str;
	int		words_count;
	int		flag;

	str = (char *) s;
	words_count = 0;
	flag = 0;
	while (*str)
	{
		if (*str != sep && !flag)
		{
			words_count++;
			flag = 1;
		}
		else if (*str == sep && flag)
			flag = 0;
		str++;
	}
	return (words_count);

}

static char	**free_str_arr(char **s)
{
	int	i;

	i = -1;
	while (s[++i])
		free(s[i]);
	free(s);
	return (NULL);
}

static char	**ft_inner_split(char **splited, char *str, char sep, int words_count)
{
	int	i;
	int	sub_word_len;

	i = 0;
	sub_word_len = 0;
	while (i < words_count)
	{
		if (*str && *str != sep)
			sub_word_len++;
		else if (sub_word_len != 0)
		{
			splited[i] = malloc(sizeof(char) * (sub_word_len + 1));
			if (!splited[i])
				return (free_str_arr(splited));
			ft_memcpy(splited[i], str - sub_word_len, sub_word_len);
			// ft_strlcpy(splited[i], str - sub_word_len, sub_word_len);
			splited[i][sub_word_len] = '\0';
			i++;
			sub_word_len = 0;
		}
		str++;
	}
	return (splited);
}

char	**ft_split(char const *s, char sep)
{
	char	**splited;
	char	*start_ptr;
	int		words_count;

	if (!s)
		return (NULL);
	start_ptr = (char *)s;
	words_count = ft_words_count(s, sep);
	splited = malloc(sizeof(char *) * (words_count + 1));
	if (!splited)
		return (NULL);
	splited[words_count] = NULL;
	return ft_inner_split(splited, start_ptr, sep, words_count);
}
