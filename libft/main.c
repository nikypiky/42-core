#include<stdio.h>
#include "libft.h"

       #include <string.h>

char **split(char const *s, char c);

int main(void)
{
	int i = 0;
	char d[] = "hello/stop";
	char *c;
	char e = '/';
	char	**array = ft_split(d, '/');
	while (array[i] != NULL)
		{
			printf("%s\n", array[i]);
			i++;
		}
	printf("%s", d);
	// c = malloc(ft_strlen((char *)d) * sizeof(char));
	// ft_strlcpy(c, d, ft_strlen(d) + 1);
	// printf("%ld - %s", ft_strlen(d), c);
}
