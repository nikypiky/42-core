/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:04:27 by nik               #+#    #+#             */
/*   Updated: 2023/08/30 17:04:27 by nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	while (*s1 && ft_strchr(set, *s1) != NULL)
		s1++;
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) != NULL)
		i--;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		str[j] = s1[j];
		j++;
	}
	str[j] = 0;
	return (str);
}
