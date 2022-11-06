/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:07:43 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/05 19:47:54 by eagoumi          ###   ########.fr       */
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
		rgm[i] = (char)c;
		i++;
	}
	return (rgm);
}

// int	main(void)
// {
// 	char	s[100];
// 	char	s1[100];

// 	printf("%s\n", ft_memset(s1, '\0', 5));
// 	printf("%s\n", memset(s, '\0', 5));
// }
