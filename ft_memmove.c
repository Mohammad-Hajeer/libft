/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:41:04 by mohajeer          #+#    #+#             */
/*   Updated: 2026/10/24 12:41:05 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				c;
	unsigned char		*destt;
	const unsigned char	*srcc;

	destt = (unsigned char *)dest;
	srcc = (const unsigned char *)src;
	if (n == 0)
		return (dest);
	if (destt < srcc)
	{
		c = 0;
		while (c < n)
		{
			destt[c] = srcc[c];
			c++;
		}
	}
	else
		while (n-- > 0)
			destt[n] = srcc[n];
	return (dest);
}
/*
int main (void)
{
	char st[]={"mohammd hajeer"};
	char des[20];
	char *result;
	result =  ft_memmove(des,st,5);
	des[14] = '\0';
	printf("%s\n",st);
	printf("%s\n",des);
	printf("%s\n",result);
	
}*/
