/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 03:29:54 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/05 19:47:54 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*srcp;
	const unsigned char	*srcp1;
	size_t				i;

	srcp = s1;
	srcp1 = s2;
	i = 0;
	while (i < n)
	{
		if (srcp[i] != srcp1[i])
			return ((srcp[i] - srcp1[i]));
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char s1[100] = "agouz";
// 	char s2[100] = "agoumi";
// 	char s11[100] = "agouz";
// 	char s22[100] = "agoumi";

// 	int r = memcmp("zyxbcdefgh", "dsdsd  ss ", 1);
// 	int r1 = ft_memcmp("zyxbcdefgh", "dsdsd  ss ", 1);
// 	printf("sys : |%d|\n", r);
// 	printf("mine : |%d|", r1);
// }
