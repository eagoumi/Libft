/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagoumi <eagoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:07:31 by eagoumi           #+#    #+#             */
/*   Updated: 2022/11/05 21:05:32 by eagoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
	lst = NULL;
}


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

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone((*lst), del);
			*lst = tmp;
		}
	}
}

void	*del_free(t_list **lst, void (*del)(void *))
{
	ft_lstclear(lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*new_content;
	t_list	*new_node;
	t_list	*new_lst;
	t_list	*last_node;

	new_lst = NULL;
	if (f == NULL || del == NULL || lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new_content = f(lst->content);
		if (!new_content)
			return (del_free(&new_lst, del));
		new_node = ft_lstnew(new_content);
		if (!new_node)
			return (del_free(&new_lst, del));
		if (new_lst == NULL)
		{
			new_lst = new_node;
			last_node = new_lst;
		}
		else
		{
			last_node->next = new_node;
			last_node = last_node->next;
		}
		lst = lst->next;
	}
	return (new_lst);
}

// void    *del(void *i)
// {
// 	printf("leet");
// }

// int main()
// {
//   t_list  *test;
//   test = ft_lstnew("leet");
//   test->next = ft_lstnew("1337");
//   test->next->next = ft_lstnew("coding");
//   test->next->next->next = ft_lstnew("school");
//   t_list *result = ft_lstmap(test, &ft_strdup, del);
//   while (result)
//   {
//     printf("%s <---> ", result->content);
//     result = result->next;
//   }
//   return 0;
// }