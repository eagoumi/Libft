/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:10:08 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/05 20:25:57 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_revnum(int revn, size_t *div)
{
	size_t	remainder;
	size_t	reverse;
	int		signe;

	reverse = 0;
	signe = 1;
	if (revn < 0)
		signe = -1;
	while (revn != 0)
	{
		remainder = (revn % 10) * signe;
		reverse = reverse * 10 + remainder;
		revn /= 10;
		*div = *div * 10;
	}
	return (reverse);
}

char	*ft_itoa(int n)
{
	int		j;
	size_t	numrev;
	size_t	div;
	char	*itoastr;

	div = 1;
	numrev = ft_revnum(n, &div);
	j = 0;
	itoastr = (char *)malloc(sizeof(char) * 12);
	if (itoastr == NULL)
		return (NULL);
	if (n < 0)
	{
		itoastr[j++] = '-';
	}
	else if (n == 0)
		itoastr[j++] = '0';
	while (div > 9)
	{
		itoastr[j] = 48 + (numrev % 10);
		numrev = numrev / 10;
		div /= 10;
		j++;
	}
	return (itoastr[j] = '\0', itoastr);
}

// int	main(void)
// {
// 	long long	n;
// 	char		*str;
// 	long long	str1;

// 	n = 0;
// 	str = ft_itoa(n);
// 	str1 = ft_revnum(n);
// 	printf("number are = %lld\n", n);
// 	printf("number are rev = %lld\n", str1);
// 	printf("int are converted to string are = %s\n", str);
// }
