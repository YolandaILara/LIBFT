#include "libft.h"
#include <stdio.h>

int	ft_tolower (int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*int main()
{
	char	letra = 'A';
	char	minuscula = ft_tolower(letra);

	printf("Antes de ft_tolower: %c\n", letra);
	printf("Después de ft_tolower. %c\n", ft_tolower(minuscula));
	return (0);	
}*/
