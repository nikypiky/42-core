#include<stdio.h>
#include "libft.h"

       #include <string.h>

char **split(char const *s, char c);
int	cpy_splits(char c, char const *s, char **str_array, size_t str_count);

int main(void)
{
	int i = 0;
	char d[] = "he/st/lp";
	char *c;
	char e = '/';
	char	**array = split(d, '/');
	while (array[i] != NULL)
		{
			printf("%s\n", array[i]);
			i++;
		}
	printf("%s\n", d);
	// c = malloc(ft_strlen((char *)d) * sizeof(char));
	// ft_strlcpy(c, d, ft_strlen(d) + 1);
	// printf("%ld - %s", ft_strlen(d), c);
}

char **split(char const *s, char c)
{
	int i = 0;
	int j = 0;
	char **str_array;

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
	return (str_array);
}

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