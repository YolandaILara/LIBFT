/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:23:50 by yinigo-l          #+#    #+#             */
/*   Updated: 2025/01/14 15:23:53 by yinigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int ft_strlen (char *c)
{
	int count = 0;

	while(c[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*int main()
{
    int result;

    result = ft_strlen("Hola ");
    printf("La cadena tiene '%d' carácteres", result);
    return (0);
}*/