#include "libft.h"

int ft_strlen(char *s)
{
    int     i;

    i = 0;
    while(s[i] != '\0')
    {
        i++;
        if (s[i] = '\0')
        {
            return(i);
        }
    }
}