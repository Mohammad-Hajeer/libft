#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    new->next = *lst;
    *lst = new;
}

int main(void)
{
    t_list  *head;
    t_list  *node1;
    t_list  *node2;
    t_list  *current;

    head = ft_lstnew("20");
    node1 = ft_lstnew("30");
    node2 = ft_lstnew("10");

    if (!head || !node1 || !node2)
        return (1);

    head->next = node1;

    ft_lstadd_front(&head, node2);

    current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    free(node2);
    free(head);
    free(node1);
    return (0);
}