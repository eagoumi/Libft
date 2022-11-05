/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:57:30 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/05 19:47:55 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	int	s[10];
// 	int	i;

// 	ft_bzero(s, 10 * sizeof(int));
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%d", s[i]);
// 		i++;
// 	}
// }

// int main(int argc, const char *argv[])
// {
// 	void *mem;

// 	alarm(5);
// 	if (argc == 1 || !(mem = malloc(sizeof(*mem) * 5)))
// 		return (0);
// 	if (atoi(argv[1]) == 1)
// 	{
// 		memset(mem, 'e', 5);
// 		ft_bzero(mem, 5);
// 		write(1, mem, 5);
// 		printf("%s", mem);
// 	}
// 	else if (atoi(argv[1]) == 2)
// 	{
// 		memset(mem, 'e', 5);
// 		ft_bzero(mem, 0);
// 		write(1, mem, 5);
// 	}
// 	return (0);
// }
