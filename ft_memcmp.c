#include "libft.h"
#include <stdio.h>

int	ft_memcmp (const void *s1, const void *s2, size_t n)
{
	const unsigned char *str1 = (unsigned char *)s1;
	const unsigned char *str2 = (unsigned char *)s2;
	size_t i = 0;

	while (i < n)
	{
		if(str1[i] != str2[i])
			return (str1[i] - str2[i]);
	i++;
	}
	return (0);
}


/*int main(void)
{
	char str1[] = "hola";
	char str2[] = "hola";
	size_t n = 4;
	int result;

	printf ("Antes de ft_memcmp: '%s' y '%s'\n", str1, str2);
	result = ft_memcmp(str1, str2, n);
	printf ("Después de ft_memcmp: '%d'\n", result);
	return 0;
}*/
