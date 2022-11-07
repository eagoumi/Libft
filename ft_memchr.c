/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 05:15:42 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 22:03:46 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	unsigned char	c2;
	size_t			i;

	s2 = (unsigned char *)s;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s2[i] == c2)
			return (s2 + i);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*s, *s4;
	s = ft_memchr("agoumi82@gmail.com", '@', 5);
	s4 = memchr("agoumi82@gmail.com", '@', 5);
	printf("mine : |%s| \n sys : |%s| \n",s, s4);
}*/
