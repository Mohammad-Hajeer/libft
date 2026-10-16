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

//#include <unistd.h>
//#include <stdio.h>
//#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ldest;
	unsigned int	lsrc;
	unsigned int	c;
	unsigned int	length;

	ldest = 0;
	lsrc = 0;
	c = 0;
	while (dest[ldest] != '\0')
		ldest++;
	while (src[lsrc] != '\0')
		lsrc++;
	if (size <= ldest)
		return (lsrc + size);
	while (src[c] != '\0' && c < (size -1) - ldest)
	{
		dest[ldest + c] = src[c];
		c++;
	}
	length = lsrc + ldest;
	dest[ldest + c] = '\0';
	return (length);
}
/*
int main(void)
{
	char src[] = {"Hajeer"};
	char dest[] = {"Hajeer"};
	printf("%zu\n",strlcat(dest,src,8));
	//printf("%d\n",ft_strlcat(dest,src,8));
	printf("%s\n",dest);
}*/
