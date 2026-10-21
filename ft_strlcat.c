/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 12:46:04 by mohajeer          #+#    #+#             */
/*   Updated: 2026/06/13 12:53:51 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ldest;
	size_t	lsrc;
	size_t	c;

	ldest = 0;
	lsrc = ft_strlen(src);
	c = 0;
	while (ldest < size && dst[ldest] != '\0')
		ldest++;
	if (ldest == size)
		return (lsrc + size);
	while (src[c] && c < (size -1) - ldest)
	{
		dst[ldest + c] = src[c];
		c++;
	}
	dst[ldest + c] = '\0';
	return (lsrc + ldest);
}
/*
int main(void)
{
	char src[] = {"Hajeer"};
	char dest[] = {"Hajeer"};
	//printf("%zu\n",strlcat(dest,src,8));
	printf("%zu\n",ft_strlcat(dest,src,0));
	printf("%s\n",dest);
}*/