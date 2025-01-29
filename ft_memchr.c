#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char    *str;
  size_t            i;

  str = (unsigned char *)s;
  i = 0;
  while (i < n)
  {
      if (str[i] == (unsigned char)c)
          return ((void *)&str[i]);
      i++;
  }
  return (NULL);
}


/*int main(void)
{
    char str[] = "Hello World!";
    int c = 'a';
    size_t n = 12;
    char *result;

    result = ft_memchr(str, c, n);
    if (result != NULL)
        printf("Character found: %c\n", *result);
    else
        printf("Character not found\n");
    return 0;
}*/
