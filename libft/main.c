#include<stdio.h>
#include <bsd/string.h> 
#include "libft.h"
#include <string.h>
#include <fcntl.h>

int main()
{
	t_list *list = ft_lstnew("hello");
	char	*s = list[0].content;
	printf("%s", s);
}
