/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 03:52:04 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 23:25:48 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
	lst = NULL;
}

/*void	delt(void *content)
{
	printf("%s\n", content);
}
int	main(void)
{
	t_list *temp = ft_lstnew("aaaaaaaa");
	temp->next = ft_lstnew("bbbbbbb");
	temp->next->next = ft_lstnew("ccccccc");
	while (temp)
	{
		ft_lstdelone(temp, &delt);
		temp = temp->next;
	}
}*/