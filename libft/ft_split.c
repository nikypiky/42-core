/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:03:53 by nik               #+#    #+#             */
/*   Updated: 2023/08/30 17:03:54 by nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cpy_splits(char c, char const *s, char **str_array, size_t str_count)
{
	int	i;

	i = 0;
	if (s[i] == 0)
		return (1);
	while (s[i] != c && s[i])
		i++;
	str_array[str_count] = (char *)malloc(sizeof(char) * i + 1);
	if (!str_array[str_count])
		return (0);
	ft_strlcpy(str_array[str_count], s, i + 1);
	s += i + 1;
	if (cpy_splits(c, s, str_array, str_count + 1) == 0)
		free (str_array[str_count]);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str_array;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	str_array = (char **)malloc(sizeof(char *) * j + 1);
	if (!str_array)
		return (NULL);
	if (cpy_splits(c, s, str_array, 0) == 0)
		free (str_array);
	str_array[j + 1] = NULL;
	return (str_array);
}
