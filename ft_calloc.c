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

  ptr = ft_calloc (10, sizeof(char));
  if (ptr == NULL)
  {
    printf ("Error al asignar la memoria\n");
    return (1);
  }
  i = 0;
  while (i < 10)
  {
    printf ("%d: %d\n", i, ptr[i]);
    i++;
  }
  free(ptr);
  return (0);
  
}
