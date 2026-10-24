/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:36:54 by mohajeer          #+#    #+#             */
/*   Updated: 2026/10/24 12:36:56 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	num;

	num = 0;
	while (lst)
	{
		num++;
		lst = lst->next;
	}
	return (num);
}
/*
int main (void)
{
    t_list *node1,*node2,*node3,*node4;
    node1 = ft_lstnew("Mohammad");
    node2 = ft_lstnew("khaled");
    node3 = ft_lstnew("abd-elkareem");
    node4 = ft_lstnew("hajeer");
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    printf("%d\n",ft_lstsize(node1));
    return 0;
}*/
