/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:15:39 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/05 19:47:54 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isalnum(int x)
{
	return ((x >= 97 && x <= 122)
		|| (x >= 65 && x <= 90) || (x >= '0' && x <= '9'));
}

/*
int main (void)
{
	int c;
	c = '8';
printf("mine\n");
	if(ft_isalnum(c))
	{
		printf("%c is an isalnum\n", c);
	}
	else
		printf("%c is not an isalnum\n", c);

	printf("sys\n");

	if(isalnum(c))
	{
		printf("%c is an isalnum\n", c);
	}
	else
		printf("%c is not an isalnum\n", c);
}
*/