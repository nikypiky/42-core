#include<stdio.h>
#include <bsd/string.h> 
#include "libft.h"

       #include <string.h>

int main(void)
{
	int i = 6;
	char c[10] = "hex";
	char d[10] = "bfg";
	int x = strlcat(c, d, i);
	// printf("%zu - %lu\n", strlen(c), ft_strlen(c));
	printf("%d - %s - %s\n", x, c, d);
	char y[10] = "hex";
	char z[10] = "bfg";
	x = ft_strlcat(y, z, i);
	printf("%d - %s - %s\n", x, y, z);
}

