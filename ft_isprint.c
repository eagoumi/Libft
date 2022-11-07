/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:37:03 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 21:48:56 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isprint(int y)
{
	return (y >= 32 && y <= 126);
}

/*int main(void)
{
    int u = 0;

    if (ft_isprint(u))
        printf("%c is printed\n", u);
    else
        printf("%c is not printed\n", u);
    if (isprint(u))
        printf("%c is printed\n", u);
    else
        printf("%c is not printed\n", u);
}*/