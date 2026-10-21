/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <mohajeer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:17:47 by mohajeer          #+#    #+#             */
/*   Updated: 2026/09/25 15:42:18 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t	i;

	a = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		a[i] = c;
		i++;
	}
	return (s);
}
/*
int main() 
{
    char str[] = "mmmmmmmm";
    ft_memset(str, 'b', 3);
    //memset(str, 'b', 3);

    printf("%s\n", str);

    return 0;
}*/