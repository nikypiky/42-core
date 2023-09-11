#include "libft.h"
#include<stdio.h>
#include <bsd/string.h> 
#include <time.h>


t_list	*ft_lstnewone(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	if (!content)
		elem->content = NULL;
	else
		elem->content = content;
	elem->next = NULL;
	return (elem);
}

void	*ft_map(void *ct)
{
	int i;
	void	*c;
	char	*pouet;

	c = ct;
	i = -1;
	pouet = (char *)c;
	pouet[0] = 'x';
	while (pouet[++i])
		if (pouet[i] == 'o')
			pouet[i] = 'a';
	return (c);
}

void    ft_del(void *content)
{
	free(content);
}

int main(void)
{
	t_list		*begin = NULL;
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	t_list		*holder;
	char		*str = ft_strdup("lorem");
	char		*str2 =ft_strdup("ipsum");
	char		*str3 = ft_strdup("dolor");
	char		*str4 = ft_strdup("sit");

	elem = ft_lstnewone(str);
	elem2 = ft_lstnewone(str2);
	elem3 = ft_lstnewone(str3);
	elem4 = ft_lstnewone(str4);
	ft_lstadd_back(&begin, elem);
	ft_lstadd_back(&begin, elem2);
	ft_lstadd_back(&begin, elem3);
	ft_lstadd_back(&begin, elem4);
	holder = ft_lstmap(begin, &ft_map, &ft_del);
	while (holder != NULL)
	{
		printf("%s ", (char *)holder->content);
		holder = holder->next;
	}
}
