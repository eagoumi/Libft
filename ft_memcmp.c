/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 03:29:54 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/08 20:46:10 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*srcp;
	unsigned char	*srcp1;
	size_t			i;

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
