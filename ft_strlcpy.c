/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:48:09 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 22:40:39 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

/*int	main(void)
{
	char s[24] = "coucou";
	char d[10] = "AAAAAAAAAA";

	printf("%s + %s = %ld\n", s, d, ft_strlcpy(d, s, 7));
	printf("%s + %s = %ld\n", s, d, ft_memcmp(d, s, 7));

	printf("%s + %s = %ld\n", s, d, strlcpy(d, s, 7));
	printf("%s + %s = %ld\n", s, d, memcmp(d, s, 7));

	printf("%s + %C = %d", s, d[7], strcmp(s, d));
}*/
