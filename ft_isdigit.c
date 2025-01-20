/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:45:58 by yinigo-l          #+#    #+#             */
/*   Updated: 2025/01/14 12:46:01 by yinigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

/*int main()
{
    char p[] = "9, 7, 7.2";
    int i = 0;

    while(p[i] != '\0')
    {
        if(ft_isdigit(p[i]))
            printf("'%c' es un dígito numérico\n", p[i]);
        else
            printf("'%c' no es un dígito numérico\n", p[i]);
        i++;
    }
    return (0);
}*/