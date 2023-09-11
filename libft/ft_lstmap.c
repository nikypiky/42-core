/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:35:22 by nik               #+#    #+#             */
/*   Updated: 2023/09/11 16:47:07 by nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*temp_node;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node != NULL)
	{
		temp_node = node;
		node = node->next;
		del(temp_node->content);
		free(temp_node);
	}
	*lst = NULL;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if(!(new_lst = ft_lstnew(f(lst->content))))
		return(NULL);
	lst = lst->next;
	while (lst != NULL)
	{
		if (!(new_node = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
