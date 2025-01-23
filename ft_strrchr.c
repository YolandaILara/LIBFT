#include "libft.h"
#include <stdio.h>
char	*ft_strrchr (const char *s, int c)
{
    int i = 0;

	while (s[i] != '\0')
	{
		int i = 0;

		while (s[i]!= '\0')
		{
			i++;
		}
		while (i >= 0)
		{
			if (s[i] == (char)c)
                return ((char *)&s[i]);
            i--;
		}
	}
	return NULL;
}

/*int main(void)
{
	const char frase[] = "Viva la vida";
	int caracter = 'V';
	char *resultado;

	printf("Antes de ft_strrchr: %s\n", frase);
	resultado = ft_strrchr(frase, caracter);
	printf("Después de ft_strrchr: %s\n", resultado);
	return 0;
}*/
