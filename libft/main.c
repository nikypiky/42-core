#include<stdio.h>
#include<string.h>
#include <bsd/string.h> 
#include <ctype.h>
#include<unistd.h>
#include"libft.h"
#include <ctype.h>
#include<stdlib.h>

int main(void)
{
	char c[] = "1230456789";
	char d[] = "123";
	printf("%d, %d", ft_strncmp(c, d, 3), strncmp(c, d, 3));
}

