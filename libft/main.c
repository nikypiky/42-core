#include<stdio.h>
#include <bsd/string.h> 
#include "libft.h"
#include <string.h>
#include <fcntl.h>
#include<ctype.h>

void *f(void *content)
{
    char *str = (char *)content;
    str[0] = 'x';
}

void del(void *content)
{
	// free(content); // Free the content (assuming it was dynamically allocated)
}

int main()
{
    printf("%d", isalnum('d'));
}
