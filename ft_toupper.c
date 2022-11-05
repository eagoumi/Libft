/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:16:19 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/05 19:47:56 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_toupper(int x)
{
	if (x >= 97 && x <= 122)
		return (x -= 32);
	else
		return (x);
}

// int main(void)
// {
// 	int i = 121;
// 	int a;
// 	// if(ft_toupper(i))
// 	//     printf("%c now is upper\n", i);
// 	// else
// 	//     printf("%c is already an upper\n", i);
// 	printf("\n");
// 	// if(toupper(97))
// 	//     printf("%c now is upper\n", i);
// 	// else
// 		printf("%c is already an upper\n", ft_toupper(97));
// }