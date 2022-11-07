/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:59:30 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 22:32:59 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

/*int main(void)
{
    int i = 0;
    char str[i];

    while(str[i])
    {
        i++;
    }
    printf("len = %zu", i);
    printf("len sys = %zu", ft_strlen(str));
}*/