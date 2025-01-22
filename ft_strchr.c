#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    }
    if ((char)c == '\0')
        return ((char *)&s[i]);
    return (0);
}
/*int main(void)
{
    const char frase[] = "Viva la vida";
    int caracter = 'l';
    char *resultado;
    
    printf ("Antes de ft_strchr: %s\n", frase);
    resultado = ft_strchr(frase, caracter);
    printf("Después de ft_strchr: %s\n", resultado);
    return (0);
}*/
