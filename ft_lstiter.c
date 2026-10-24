/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:34:12 by mohajeer          #+#    #+#             */
/*   Updated: 2026/10/24 12:34:14 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

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

    printf("List content:\n");
    ft_lstiter(node1, print_content);

    ft_lstclear(&node1, free);

    return (0);
}*/
