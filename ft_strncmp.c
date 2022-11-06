/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:22:06 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/05 20:04:53 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	return (0);
}

// int main (void)
// {
// 	char *e1, *e2;
// 	int j,u;
// 	j = 0;
// 	u = 0;
// 	e1 = "";
// 	e2 = " ";

// 	printf("%d\n", ft_strncmp(e1, e2, 3));
// 	printf("%d", strncmp(e1, e2, 3));
// }
