#include <OpenGL/gl.h>
#include "../../includes/libft.h"

char *  ft_strtrim(char const *s1, char const *set)
{
    /* size_t  start; */
    /* size_t  end; */

    /* if (!s1 || !set) */
    /*     return (NULL); */
    /* start = 0; */
    /* while (s1[start] && ft_strchr(set, s1[start])) */
    /*     start++; */
    /* end = ft_strlen(s1); */
    /* while (end > start && ft_strchr(set, s1[end - 1])) */
    /*     end--; */
    /* return (ft_substr(s1, start, end - start)); */
    size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

int main()
{
    /* char *  s1 = "arbitrary TCP and UDP connections"; */
    /* char *  s2 = "abcdABCD"; */
    /* char *  s1 = "xaybzc_xyz"; */
    /* char *  s2 = "xyz"; */
    char *  s1 = "     Hello World xxx   ";
    char *  s2 = " xWH";
    char *  p = ft_strtrim(s1, s2);
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("t  = %s\n", p);
}
