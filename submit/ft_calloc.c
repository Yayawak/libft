#include "../../includes/libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    /* (malloc(count * sizeof(size))); */
    void*   ptr;

    ptr = malloc(count * size);
    if (ptr == NULL)
        return NULL;
    ft_memset(ptr, 0, size);
    return (ptr);
}

int main()
{
    int n_elements = 10;
    int ele_size = sizeof(n_elements);
    int*   array = (int *)ft_calloc(n_elements, ele_size);

    if (array == NULL)
    {
        printf("Unsucess alloction.\n");
        return (1);
    }
    for (int i = 0; i < n_elements; i++)
        printf("%d ", array[i]);
    free(array);
    return (0);
}
