#include "libft.h"
#include <stdio.h>

int ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*int main()
{
	char	letra = 'b';
	char	mayuscula = ft_toupper(letra);
	
	printf("Antes de ft_toupper: %c\n", letra);
	printf("Después de ft_toupper: %c\n", mayuscula);
	return 0;
}*/
