/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagoumi <ayagoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 01:45:58 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/07 23:28:23 by ayagoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temporaire;

	temporaire = lst;
	if (temporaire)
	{
		while (temporaire->next)
		{
			temporaire = temporaire->next;
		}
		return (temporaire);
	}
	return (temporaire);
}

// int	main(void)
// {
// 	t_list *temp = ft_lstnew("aaaaaaaa");
// 	t_list *result = ft_lstlast(temp);

// 	printf("%s\n", result);
// }
