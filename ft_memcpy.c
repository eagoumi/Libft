/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:13:56 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/05 19:47:54 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*rgm;
	char	*rsrc;
	size_t	i;

	rgm = dst;
	rsrc = (char *)src;
	i = 0;
	while (i < n)
	{
		rgm[i] = rsrc[i];
		i++;
	}
	return (rgm);
}

// int	main(void)
// {
// 	char	src[100];
// 	char	dst[200];
// 	char	src1[100];
// 	char	dst1[200];

// 	memcpy(dst, src, sizeof(char) * 100);
// 	ft_memcpy(dst1, src1, sizeof(char) * 100);
// 	printf("dst : %s \n src : %s\n", dst, src);
// 	printf("dst1 : %s \n src1 : %s\n", dst1, src1);
// }
