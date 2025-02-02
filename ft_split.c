/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:03:53 by nik               #+#    #+#             */
/*   Updated: 2023/09/11 23:19:47 by nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**word_count(char const *s, char c)
{
	int		i;
	int		j;
	char	**array;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			j++;
		i++;
	}
	array = (char **)malloc(sizeof(char *) * (j + 1));
	if (!array)
		return (NULL);
	return (array);
}

int	malloc_str(char **str_array, size_t i, size_t j)
{
	str_array[j] = (char *)malloc(sizeof(char) * i + 1);
	if (!str_array[j])
	{
		while (j)
		{
			free (str_array[j]);
			j--;
		}
		return (1);
	}
	return (0);
}

void	ft_count_letter(const char *s, char c, char **tab)
{
	int		i;
	int		string;
	int		letter;

	i = 0;
	string = 0;
	letter = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
			letter++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			tab[string] = malloc(sizeof(char) * (letter + 1));
			if (!tab[string])
			{
				while (tab[string])
					free(tab[string--]);
			}
			string++;
			letter = 0;
		}
		i++;
	}
}

void	ft_fill_tab(char const *s, char c, char **tab)
{
	int		i;
	int		string;
	int		letter;

	i = 0;
	string = 0;
	letter = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			tab[string][letter] = s[i];
			letter++;
		}
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			tab[string][letter] = '\0';
			string++;
			letter = 0;
		}
		i++;
	}
	tab[string] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char		**str_array;

	str_array = word_count(s, c);
	if (!str_array)
		return (NULL);
	ft_count_letter(s, c, str_array);
	ft_fill_tab(s, c, str_array);
	return (str_array);
}
