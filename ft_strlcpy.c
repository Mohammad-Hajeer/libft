/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 13:20:57 by mohajeer          #+#    #+#             */
/*   Updated: 2026/10/24 13:20:59 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	while (src[c] != '\0' && size -1 > c)
	{
		dst[c] = src[c];
		c++;
	}
	dst[c] = '\0';
	return (i);
}
/*
int main (void)
{
	char st[]={"mohammd hajeer"};
	char des[5];
	printf("%zu\n",ft_strlcpy(des,st,5));
	//printf("%zu\n",strlcat(des,st,11));
	printf("%s\n",des); //to test what stored in dest
}*/
