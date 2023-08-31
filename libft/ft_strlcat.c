/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:06:53 by nik               #+#    #+#             */
/*   Updated: 2023/08/31 14:28:47 by nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	j = 0;
	i = ft_strlen(dst);
	dst_len = ft_strlen(dst) + ft_strlen(src);
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[j] != 0)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	if (ft_strlen(dst) >= size)
		return (ft_strlen(src) + size);
	return (dst_len);
}
