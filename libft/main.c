#include "libft.h"
#include<stdio.h>
#include <bsd/string.h> 

void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int main()
{
    char *dest = (char *)malloc(sizeof(*dest) * 15);
	memset(dest, 0, 15);
	memset(dest, 'r', 15);
	//dest[10] = 'a';
	int i = ft_strlcat(dest, "lorem ipsum dolor sit amet", 5);
	printf("%d %s", i, dest);
}
