/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:50:28 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 23:42:47 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			temp = ft_lstlast(*lst);
			temp->next = new;
		}
	}
}

/*int	main(void)
{
	t_list	*new_lst;
	new_lst = ft_lstnew("agoumi");
	t_list	*temp = ft_lstnew("aaaaaaaa");
	temp->next = ft_lstnew("bbbbbbb");
	temp->next->next = ft_lstnew("ccccccc");
	ft_lstadd_back(&temp, new_lst);
	while (temp)
	{
		printf("%s <------->", temp->content);
		temp = temp->next;
	}
}*/