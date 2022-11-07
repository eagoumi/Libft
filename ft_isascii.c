/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:12:24 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 21:43:53 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isascii(int n)
{
	return (n >= 0 && n <= 127);
}

/*int main(void)
{
	int x;
	x = 130;

	if(ft_isascii(x))
	{
		printf("%c is an ascii\n", x);
	}
	else
		printf("%c is not an ascii\n", x);
	if(isascii(x))
	{
		printf("%c is an ascii\n", x);
	}
	else
		printf("%c is not an ascii\n", x);
}*/