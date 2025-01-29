#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void  *ft_calloc(size_t count, size_t size)
{
  void *yptr;

  ptr = malloc (count * size);
  if (!ptr)
    return (NULL);
  ft_memset (ptr, 0, count * size);
  return (ptr);
}

int main()
{
  char ptr[] = "Hola buenos dias que tal estas";
  int i;

  
}
