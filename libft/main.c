#include "libft.h"
#include<stdio.h>
#include<string.h>


int main()
{
    char s1[11] = "helloesf";
	char s2[11] = "sd";

	ft_strlcat(s1, s2, 5);
	printf("%ld\n", ft_strlen(s1));
    printf("%s", s1);
}
