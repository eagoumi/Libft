/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:52:11 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/05 19:47:54 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

/*
int main (void)
{
	int a;
		a = 'A';

	if(ft_isalpha(a))
	{
		printf("%c is an alpha\n", a);
	}
	else
		printf("%c is not an alpha", a);
	printf("\n");
	if(isalpha(a))
	{
		printf("%c is an alpha\n", a);
	}
	else
	{
		printf("%c is not an alpha\n", a);
	}
}*/