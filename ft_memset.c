/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreailara <andreailara@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:42:23 by yinigo-l          #+#    #+#             */
/*   Updated: 2025/01/16 19:14:18 by andreailara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		len--;
	}
	return (b);
}

/*int main()
{
	char str[] = "Hola buenos dias";

	printf("Antes: '%s'\n", str);
	ft_memset(str, 'a', 7);
	printf("Después: '%s'\n", str);

	return 0;
}*/
