/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:35:00 by mohajeer          #+#    #+#             */
/*   Updated: 2026/10/24 12:35:00 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main (void)
{
    t_list *node1,*node2,*node3,*node4,*last;
    node1 = ft_lstnew("Mohammad");
    node2 = ft_lstnew("khaled");
    node3 = ft_lstnew("abd-elkareem");
    node4 = ft_lstnew("hajeer");
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    last = ft_lstlast(node1);
    //ft_lstlast(node1);
    //while (node1)
    //{
        printf("%s\n",(char *)last->content);
        node1 = node1->next;
   // }
    
    return 0;
}*/
