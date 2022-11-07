/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 03:32:36 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 22:07:22 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strchr(const char *ch, int s)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = ft_strlen(ch);
	while (ch != 0 && i <= j)
	{
		if (ch[i] == (char )s)
			return ((char *)(ch + i));
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*str;
	char	*s;

	s = "agou";
	int i = 0;
	str = ft_strchr("agoumi", 0);
	const char *s = "teste";
	printf("%p\n", ft_strchr(s, '\0'));
	printf("%p\n", strchr(s, '\0'));
}*/