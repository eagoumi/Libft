/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:44:21 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 21:42:44 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	x;
	int	signe;

	signe = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\n' || str[i] == '\f'))
		i++;
	if (str[i] == '-')
	{
		signe = signe * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	x = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		x = (x * 10) + (str[i] - 48);
		i++;
	}
	return (signe * x);
}

/*int main(void)
{
	char s[] = "+101";
	printf("|%d|\n", ft_atoi((s)));
	printf("|%d|", atoi(s));
}*/