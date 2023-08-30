/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:05:13 by nik               #+#    #+#             */
/*   Updated: 2023/08/30 17:55:19 by nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	s2_len;

	i = 0;
	s2_len = ft_strlen(s2);
	if (s2_len == 0)
		return ((char *)s1);
	if (ft_strlen(s1) < s2_len)
		return (NULL);
	while (i <= len - s2_len)
	{
		if (ft_strncmp(&s1[i], s2, s2_len - 1) == 0)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
