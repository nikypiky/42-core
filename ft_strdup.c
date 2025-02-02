/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:06:05 by nik               #+#    #+#             */
/*   Updated: 2023/08/30 17:53:05 by nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;
	char	*dup;

	dup = (char *)s;
	i = 0;
	str = malloc(ft_strlen(dup) + 1);
	while (i <= ft_strlen(dup))
	{
		str[i] = dup[i];
		i++;
	}
	return (str);
}
