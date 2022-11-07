/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:21:17 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 22:03:26 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*listtemp;

	count = 0;
	listtemp = lst;
	while (listtemp != NULL)
	{
		count++;
		listtemp = listtemp->next;
	}
	return (count);
}

/*int	main(void)
{
	t_list *temp = ft_lstnew("aaaaaaaa");
	temp->next = ft_lstnew("bbbbbbb");
	temp->next->next = ft_lstnew("ccccccc");
	int result = ft_lstsize(temp);
	printf("%d\n", result);
	temp = temp->next;
}*/