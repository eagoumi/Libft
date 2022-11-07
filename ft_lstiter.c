/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 04:03:14 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 23:50:41 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	ft_fonc(void *content)
{
	printf("%s", content);
}

int	main(void)
{
	t_list	*temp;

	temp = ft_lstnew("agoumi");
	ft_lstiter(temp, &ft_fonc);
}*/