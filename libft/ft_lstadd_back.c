/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:35:04 by nik               #+#    #+#             */
/*   Updated: 2023/09/08 19:05:33 by nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*position;

	position = *lst;
	
	if (*lst == NULL)
		(*lst) = new;
	else
	{
		while (position->next)
			position = position -> next;
		position->next = new;
	}
	new->next = NULL;
}
