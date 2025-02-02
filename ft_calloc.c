/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:06:29 by nik               #+#    #+#             */
/*   Updated: 2023/08/30 17:36:48 by nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*array;

	i = 0;
	array = malloc(nmemb * size);
	while (i < nmemb * size)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
