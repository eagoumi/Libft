/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:37:03 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/05 19:47:54 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isprint(int y)
{
	return (y >= 32 && y <= 126);
}

// int main(void)
// {
//     int u = 0;

//     if (ft_isprint(u))
//         printf("%c is printed\n", u);
//     else
//         printf("%c is not printed\n", u);
//     if (isprint(u))
//         printf("%c is printed\n", u);
//     else
//         printf("%c is not printed\n", u);
// }