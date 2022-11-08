/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:07:43 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/08 20:29:47 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memset(void *d, int c, size_t lend)
{
	char	*rgm;
	size_t	i;

	rgm = d;
	i = 0;
	while (i < lend)
	{
		rgm[i] = (unsigned char)c;
		i++;
	}
	return (rgm);
}
