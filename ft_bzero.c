/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:57:30 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 21:43:07 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	int	s[10];
	int	i;

	ft_bzero(s, 10 * sizeof(int));
	i = 0;
	while (i < 10)
	{
		printf("%d", s[i]);
		i++;
	}
}*/