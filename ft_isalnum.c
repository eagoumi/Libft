/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:15:39 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/08 19:45:35 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isalnum(int x)
{
	return ((x >= 97 && x <= 122)
		|| (x >= 65 && x <= 90) || (x >= '0' && x <= '9'));
}
