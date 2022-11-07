/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:13:56 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/06 23:08:44 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*rgm;
	char	*rsrc;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
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

// 	memcpy(NULL, NULL, 3);
// 	ft_memcpy(NULL, NULL, 3);
// 	// printf("dst : %s \n src : %s\n", dst, src);
// 	// printf("dst1 : %s \n src1 : %s\n", dst1, src1);
// }
