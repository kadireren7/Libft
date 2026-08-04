#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;

    i = ft_strlen(src);
    j = ft_strlen(dst);

    if (j == size)
        return (size + i);
    if (size >= i + j)
        ft_memcpy(dst + j, src, i + 1);
    else
    {
        ft_memcpy(dst + j, src, size - j - 1);
        dst[size - 1] = '\0';
    }
    return (j + i);
}
