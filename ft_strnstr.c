#include "libft.h"
#include <stdio.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}

/*int main ()
{
	const char haystack[] = "Hello World";
	const char needle[] = "World";
	size_t len = 20;
	char *result;

	result = ft_strnstr(haystack, needle, len);
	if (result)
		printf ("Subcadena encontrada en: %s\n", result);
	else 
		printf ("Subcadena no encontrada\n");
	return (0);
}*/
