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
    //char *dest = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
	//memset(dest, 0, 15);
	//memset(dest, 'r', 6);
	//dest[10] = 'a';
	//int i = '\e';
	printf("%d ",   ft_atoi("--5"));
	printf("%d ",      atoi("--5"));
}
