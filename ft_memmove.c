#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
	{
		d += n;
		s += n;
		while (n > 0)
		{
			*(--d) = *(--s);
			n--;
		}
	}
	else 
	{
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
	}
	return (dest);
}

/*int main() //-- con solapamiento 
{
	char str[] = "hola me llamo yolanda";

	printf ("Antes de mmemove: '%s'\n", str);
	ft_memmove (str + 5, str + 2, 7);
	printf ("Después de memmove: '%s'\n", str);
	return (0);
}*/

/*int main () //-- sin solapamiento
{
	char origen[] = "hola mundo que tal estas en el dia de hoy";
	char destino[100];

	printf ("Antes de memmove: '%s'\n", origen);
	ft_memmove (destino, origen, 5);
	printf ("Después de memmove: '%s'\n", destino);
	return (0);
}*/