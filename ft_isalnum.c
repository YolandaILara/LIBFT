/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:37:27 by yinigo-l          #+#    #+#             */
/*   Updated: 2025/01/14 13:37:30 by yinigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
/*int main()
{
	char p[] = "hola ue90w2.";
	int i = 0;

	while(p[i] != '\0')
	{
		if(ft_isalnum(p[i]))
			printf("'%c' es un carácter alfanumérico\n", p[i]);
		else
			printf("'%c' no es un carácter alfanumérico\n", p[i]);
		i++;
	}
}*/