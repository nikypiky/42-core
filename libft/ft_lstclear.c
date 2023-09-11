/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:34:20 by nik               #+#    #+#             */
/*   Updated: 2023/09/06 23:02:32 by nik              ###   ########.fr       */
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
