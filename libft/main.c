#include "libft.h"
#include<stdio.h>
#include <bsd/string.h> 
#include <time.h>

int main() 
{
	//char	test[] = "test\134";
	//int	i = 0;

	//while (test[i])
	//{
	//	printf("%c", test[i]);
	//	i++;
	//}
	printf("%d\n", ft_memcmp("", "test", 4));
	printf("%d", memcmp("", "test", 4));

}
