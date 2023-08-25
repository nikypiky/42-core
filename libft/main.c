#include<stdio.h>
#include <bsd/string.h> 
#include "libft.h"
#include <string.h>
#include <fcntl.h>

// int main()
// {
//     // Create nodes with content
//     t_list *node1 = ft_lstnew("Hello");
//     t_list *node2 = ft_lstnew("world!");
//     ft_lstadd_front(&node1, node2);
//     printf("%p - %p", node1, node2->next);
// }

int main()
{
    t_list *head = NULL; // Initialize the head pointer to NULL

    // Create nodes and add them to the front of the list
    t_list *node1 = ft_lstnew("Hello");
    ft_lstadd_front(&head, node1);

    t_list *node2 = ft_lstnew("World");
    ft_lstadd_front(&head, node2);

    t_list *node3 = ft_lstnew("!");
    ft_lstadd_front(&head, node3);

    t_list *test = ft_lstlast(head);
    // Traverse and print the linked list
    printf("%s\n", (char *)test->content);
    t_list *current = head;
    while (current != NULL)
    {
        printf("%s ", (char *)current->content);
        current = current->next;
    }

    // Free memory allocated for nodes
    free(node1);
    free(node2);

    return 0;
}