/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:21:11 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 23:42:27 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int	main(void)
{
	t_list	*new_lst;
	new_lst = ft_lstnew("agoumi");
	t_list	*temp = ft_lstnew("aaaaaaaa");
	temp->next = ft_lstnew("bbbbbbb");
	temp->next->next = ft_lstnew("ccccccc");
	ft_lstadd_front(&temp, new_lst);
	while (temp)
	{
		printf("%s <------->", temp->content);
		temp = temp->next;
	}
}*/