/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:24:43 by mohajeer          #+#    #+#             */
/*   Updated: 2026/10/24 12:24:47 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*a;

	a = s;
	i = 0;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}
/*
int main (void)
{
	char str[]="Mohammad Hajeer";
	ft_bzero(str,5);
	printf("size of = %lu\n",sizeof(str));
	for (size_t i = 0;i < sizeof(str);i++)
	{
		printf("str[%zu] = %d (UTF-8)\n",i,(char)str[i]);
	}
	return 0;
}*/
