/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:57:01 by yinigo-l          #+#    #+#             */
/*   Updated: 2025/01/14 13:57:04 by yinigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isascii(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}
/*int	main()
{
	char p[] = "?¿Hola que tal á";
	int i = 0;

	while(p[i] != '\0')
	{
		if(ft_isascii(p[i]))
			printf("'%c' es un carácter ascii\n", p[i]);
		else 
			printf("'%c' no es un carácter ascii\n", p[i]);
		i++;
	}
}*/