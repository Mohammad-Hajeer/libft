/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:32:23 by mohajeer          #+#    #+#             */
/*   Updated: 2026/10/24 12:32:25 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
/*
int main(void)
{
    t_list *node1;
    t_list *node2;
    t_list *node3;

    node1 = ft_lstnew(ft_strdup("90"));
    node2 = ft_lstnew(ft_strdup("50"));
    node3 = ft_lstnew(ft_strdup("20"));

    node1->next = node2;
    node2->next = node3;

    printf("Before clear:\n");
    printf("%s\n", (char *)node1->content);
    printf("%s\n", (char *)node2->content);
    printf("%s\n", (char *)node3->content);

    ft_lstclear(&node1, delet);

    printf("\nAfter clear:\n");

    if (node1 == NULL)
        printf("List is empty!\n");

    return (0);
}*/
