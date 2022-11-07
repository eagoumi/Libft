/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:58:54 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 22:06:20 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	n;

	n = 0;
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}

/*int main(void)
{
	char *str;
  str = "45544545";
	  ft_putstr_fd(str, 1);
}*/