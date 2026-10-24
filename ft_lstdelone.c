/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:33:32 by mohajeer          #+#    #+#             */
/*   Updated: 2026/10/24 12:33:33 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free (lst);
}
/*

static void delet(void *fr)
{
    free(fr);
}

int main(void)
{
    t_list *node1, *node2, *node3, *node4;

    node1 = ft_lstnew(ft_strdup("90"));
    node2 = ft_lstnew(ft_strdup("50"));
    node3 = ft_lstnew(ft_strdup("20"));
    node4 = ft_lstnew(ft_strdup("70"));

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    ft_lstdelone(node3, delet);

    while (node1 != NULL)
    {
        printf("%s\n", (char *)node1->content);
        node1 = node1->next;
    }

    return (0);
}*/
