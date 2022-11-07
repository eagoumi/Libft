/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:59:42 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 22:00:51 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*str;

	str = (t_list *)malloc(sizeof(t_list));
	if (str == NULL)
		return (NULL);
	str->content = content;
	str->next = NULL;
	return (str);
}

/*int	main(void)
{
	t_list *temp = ft_lstnew("aaaaaaaa");
	temp->next = ft_lstnew("bbbbbbb");
	temp->next->next = ft_lstnew("ccccccc");
	while(temp)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}
}*/
