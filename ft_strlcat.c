/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:36:10 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 22:40:36 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendest;
	size_t	lensrc;

	i = 0;
	j = 0;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (size != 0 && lendest < size)
	{
		while (i < lendest)
			i++;
		while (i < (lendest + lensrc) && i < (size - 1))
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (lendest + lensrc);
	}
	return (lensrc + size);
}

/*int	main(void)
{
	char s[24] = "coucou";
	char d[10] = "AAAAAAAAAA";

	printf("%s + %s = %ld\n", s, d, ft_strlcat(d, s, 7));
	printf("%s + %s = %ld\n", s, d, ft_memcmp(d, s, 7));

	printf("%s + %s = %ld\n", s, d, strlcat(d, s, 7));
	printf("%s + %s = %ld\n", s, d, memcmp(d, s, 7));

	printf("%s + %C = %d", s, d[7], strcmp(s, d));
}*/