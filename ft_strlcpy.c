#include "libft.h"
#include <stdio.h>

size_t ft_strlcpy (char *dst, const char *src , size_t destsize)
{
    size_t i = 0;
    size_t src_len = 0;
    
    while (src[src_len]!= '\0')
    {
        src_len++;
    }
    if (destsize == 0)
    {
        return src_len;
    }
    while ((i < destsize - 1) && (src[i]!= '\0'))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return src_len;
}

/*int main ()
{
    char src[23] = "hola mundo cruel world";
    char dst[100];
    size_t destsize = 20;

    ft_strlcpy(dst, src, destsize);
    printf("%s\n", dst);
    return 0;
}*/
