#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*head;
	t_list	*last;
	void	*temp;

	head = NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		temp = f(lst->content);
		if (!temp)
			return (ft_lstclear(&head, del), NULL);
		ptr = ft_lstnew(temp);
		if (!ptr)
			return (del(temp), ft_lstclear(&head, del), NULL);
		if (!head)
			head = ptr;
		else
			last->next = ptr;
		last = ptr;
		lst = lst->next;
	}
	return (head);
}

void *to_upper_content(void *content)
{
    char    *str;
    char    *new_str;
    int     i;

    str = (char *)content;
    new_str = malloc(ft_strlen(str) + 1);
    if (!new_str)
        return (NULL);
    i = 0;
    while (str[i] != '\0')
    {
        new_str[i] = (char)toupper((unsigned char)str[i]);
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list  *node1;
    t_list  *node2;
    t_list  *node3;
    t_list  *new_list;

    node1 = ft_lstnew(ft_strdup("hello"));
    node2 = ft_lstnew(ft_strdup("world"));
    node3 = ft_lstnew(ft_strdup("libft"));

    if (!node1 || !node2 || !node3)
        return (1);

    node1->next = node2;
    node2->next = node3;

    printf("Original list:\n");
    ft_lstiter(node1, print_content);

    new_list = ft_lstmap(node1, to_upper_content, delet);

    printf("\nNew list:\n");
    ft_lstiter(new_list, print_content);

    printf("\nOriginal list after map:\n");
    ft_lstiter(node1, print_content);

    ft_lstclear(&node1, delet);
    ft_lstclear(&new_list, delet);

    return (0);
}