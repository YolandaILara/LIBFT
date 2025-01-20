/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:08:40 by yinigo-l          #+#    #+#             */
/*   Updated: 2025/01/13 16:08:41 by yinigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int main()
{
    char p[] = "a??:_";
    int i = 0;

    while (p[i] != '\0')
    {
        if(isalpha(p[i]))
            printf("'%c' es una letra", p[i]);
        else 
            printf("'%c' no es una letra", p[i]);
        i++;
    }
    return 0;
}*/
