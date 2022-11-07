/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:43:03 by eagoumi           #+#    #+#             */
/*   Updated: 2022/10/20 22:43:03 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest2 = dest;
	src2 = (char *)src;
	if (dest2 < src2)
		return (ft_memcpy(dest2, src2, n));
	while (n > 0)
	{
		n--;
		dest2[n] = src2[n];
	}
	return (dest2);
}

/*int	main(void)
{
	char	src[100];
	char	dst[200];
	char	src1[100];
	char	dst1[200];

	memmove(NULL, NULL, 3);
	ft_memmove(NULL, NULL, 3);
	printf("dst : %s \n src : %s\n", dst, src);
	printf("dst1 : %s \n src1 : %s\n", dst1, src1);
}*/