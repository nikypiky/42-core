/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:03:53 by nik               #+#    #+#             */
/*   Updated: 2023/09/06 18:07:54 by nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//static void	ft_freeup(char *strs)
//{
//	int	i;

//	i = 0;
//	while (strs[i] != '\0')
//	{
//		free(strs);
//		i++;
//	}
//	free(strs);
//}

//static int	ft_wordcount(char *str, char c)
//{
//	int	i;
//	int	word;

//	i = 0;
//	word = 0;
//	while (str[i] != '\0')
//	{
//		if (str[i] != c)
//		{
//			word++;
//			while (str[i] != c && str[i] != '\0')
//				i++;
//			if (str[i] == '\0')
//				return (word);
//		}
//		i++;
//	}
//	return (word);
//}

//static void	ft_strcpy(char *word, char *str, char c, int j)
//{
//	int	i;

//	i = 0;
//	while (str[j] != '\0' && str[j] == c)
//		j++;
//	while (str[j + i] != c && str[j + i] != '\0')
//	{
//		word[i] = str[j + i];
//		i++;
//	}
//	word[i] = '\0';
//}

//static char	*ft_stralloc(char *str, char c, int *k)
//{
//	char	*word;
//	int		j;

//	j = *k;
//	word = NULL;
//	while (str[*k] != '\0')
//	{
//		if (str[*k] != c)
//		{
//			while (str[*k] != '\0' && str[*k] != c)
//				*k += 1;
//			word = (char *)malloc(sizeof(char) * (*k + 1));
//			if (word == NULL)
//				return (NULL);
//			break ;
//		}
//		*k += 1;
//	}
//	ft_strcpy(word, str, c, j);
//	return (word);
//}

//char	**ft_split(char const *str, char c)
//{
//	char	**strs;
//	int		i;
//	int		j;
//	int		pos;

//	if (str == NULL)
//		return (NULL);
//	i = 0;
//	pos = 0;
//	j = ft_wordcount((char *)str, c);
//	strs = (char **)malloc(sizeof(char *) * (j + 1));
//	if (strs == NULL)
//		return (NULL);
//	strs[j] = NULL;
//	while (i < j)
//	{
//		strs[i] = ft_stralloc(((char *)str), c, &pos);
//		if (strs[i] == NULL)
//		{
//			ft_freeup(strs[i]);
//		}
//		i++;
//	}
//	return (strs);
//}

int	word_count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		i++;
	}
	return (j);
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

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	char		**str_array;
	char		*ptr;

	ptr = &c;
	ptr = ft_strtrim(s, ptr);
	j = 0;
	str_array = (char **)malloc(sizeof (char *) * word_count(s, c) + 1);
	if (!str_array)
		return (NULL);
	while (*ptr != '\0')
	{
		i = 0;
		while (*ptr == c && *ptr != '\0')
			ptr++;
		while (ptr[i] != c && ptr[i])
			i++;
		if (malloc_str(str_array, i + 1, j) == 1)
			return (NULL);
		ft_strlcpy(str_array[j], ptr, i + 1);
		j++;
		ptr += i;
	}
	return (str_array);
}
