#include "libft.h"
#include <stdio.h>

int	ft_atoi (const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r' 
		&& str[i] == '\v' && str[i] == '\f' && str[i] == '\n'))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
			if (str[i] == '-')
				sign = -1;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*int main ()
{
	char str[] = "-939mamefieivio338rnfi";
	int result = 0;

	printf ("Antes de la función: %s\n", str);
	result = ft_atoi(str);
	printf("El resultado es: %d\n", result);
	return (0);
}*/
