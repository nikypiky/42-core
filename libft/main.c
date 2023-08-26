#include<stdio.h>
#include <bsd/string.h> 
#include "libft.h"
#include <string.h>
#include <fcntl.h>

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
    t_list *head = NULL;

    char *str1 = strdup("Hello");
    t_list *node1 = ft_lstnew(str1);
    ft_lstadd_front(&head, node1);

    char *str2 = strdup("World");
    t_list *node2 = ft_lstnew(str2);
    ft_lstadd_back(&head, node2);

    char *str3 = strdup("");
    t_list *node3 = ft_lstnew(str3);
    ft_lstadd_back(&head, node3);

    char *str4 = strdup("bruh");
    t_list *node4 = ft_lstnew(str4);
    ft_lstadd_back(&head, node4);

    ft_print_list(head);

    t_list  *test = ft_lstmap(head, f, del);

    ft_print_list(head);
    ft_print_list(test);

    // Free memory allocated for nodes and strings
    // ft_lstclear(&head, free);

    return 0;
}
