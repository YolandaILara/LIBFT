/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:11:44 by yinigo-l          #+#    #+#             */
/*   Updated: 2025/01/14 14:11:46 by yinigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int main()
{
	char p[] = "Hola qué tal estás";
	int i = 0;

	while (p[i] != '\0')
	{
		if(ft_isprint(p[i]))
			printf("'%c' es un carácter imprimible\n", p[i]);
		else
			printf("'%c' no es un carácter imprimible\n", p[i]);
		i++;
	}
}*/
