#include "libft.h"
#include <stdio.h>

void   *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;

	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

/*int main()
{
	char origen[] = "hola mundo que tal estas hoy en dia en la vida de un programador";
	char destino[300];

	printf ("Antes de memcpy: '%s'\n", origen);
	ft_memcpy (destino, origen, 9);
	printf ("Deespués de memcpy: '%s'\n", destino);
	return (0);
}*/