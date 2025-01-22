#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	len = 0;
	while (str[len])
	{
		len++;
	}
	return len;
}

size_t	ft_strlcat (char *dest, const char *src, size_t size)
{
	size_t	dest_len = ft_strlen(dest);
	size_t	src_len = ft_strlen(src);
	size_t	i = 0;

	if (size <= dest_len)
		return size + src_len;
	while(src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*int	main()
{
	char dest[20] = "Hola ";
	const char src[] = "Mundo";
	size_t	size = sizeof(dest);
	size_t result = 0;

	printf("Antes de ft_strlcat:\n");
	printf("Dest: '%s'\n", dest);
	printf("Src: '%s'\n", src);

	result = ft_strlcat(dest, src, size);

	printf("Después de ft_strlcat:\n");
	printf("Dest: '%s'\n", dest);
	printf("Longitud que se espera:'%zu'\n", result);
}*/
