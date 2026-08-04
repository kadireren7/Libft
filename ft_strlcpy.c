#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = ft_strlen(src);

    if (i + 1 < size)
    {
        ft_memcpy(dst, src, i - 1);
    }
    else if (size != '\0')
    {
        dst[size - 1] = 0;
    }
    return (i);
}
