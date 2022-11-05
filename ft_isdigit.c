/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:12:17 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/05 19:47:54 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isdigit(int st)
{
	return (st >= '0' && st <= '9');
}
/*
int main(void)
{
	int X,Y;
	X = 's';
	Y = 2;
	printf("mine\n");
	if(ft_isdigit(X))
	{
		printf("%c is an digit\n", X);
		//printf("%d is an digit\n", Y);
	}
	else
	{
		printf("%c is not an digit\n", X);
		//printf("%d is not an digit\n", Y);
	}

	printf("\n");
	printf("sys\n");
	if(isdigit(X))
	{
		printf("%c is an digit\n", X);
		//printf("%d is an digit\n", X);
	}
	else
	{
		printf("%c is not an digit\n", X);
		//printf("%d is not an digit\n", Y);
	}
}
*/