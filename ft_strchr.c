/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 03:32:36 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/05 19:47:54 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strchr(const char *ch, int s)
{
	size_t	j;
	int		i;

	i = 0;
	if (ch == NULL)
		return (NULL);
	j = ft_strlen(ch);
	if (s == 0)
		return ((char *)(ch + j));
	while (ch[i])
	{
		if (ch[i] == (char )s)
			return ((char *)(ch + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*s;

// 	// s = "agou"
// 	// int i = 0;
// 	// str = ft_strchr("agoumi", 0);
// 	printf("%s", ft_strchr("agoumi", 0));
// 	printf("%s", strchr("agoumi", 0));
// 	// printf ("%c\n", *str);
// 	// printf("%c", *strchr("agoumi", "gou"));
// }
