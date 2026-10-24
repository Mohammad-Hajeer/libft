/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:39:16 by mohajeer          #+#    #+#             */
/*   Updated: 2026/10/24 12:39:18 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				c;
	unsigned char		*destt;
	const unsigned char	*srcc;

	destt = (unsigned char *)dest;
	srcc = (const unsigned char *)src;
	c = 0;
	if (n == 0)
		return (dest);
	while (n--)
	{
		destt[c] = srcc[c];
		c++;
	}
	return (dest);
}
/*
int main(void)
{
	char	st[] = "mohammd hajeer";
	char	des[20];

	ft_memcpy(des, st, 1);
	des[1] = '\0';
	printf("%s\n", des);
	return (0);
}*/
