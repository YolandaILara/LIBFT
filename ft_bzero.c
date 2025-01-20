#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		*ptr++;
		n--;
	}
}

/*int main()
{
	char str[] = "Hola buenos dias que tal estas";

	printf("Antes: '%s'\n", str);
	ft_bzero(str + 3, 30);
	printf("Después: '%s'\n", str);
	return (0);
}*/