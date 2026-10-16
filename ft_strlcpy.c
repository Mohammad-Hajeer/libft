/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 11:32:46 by mohajeer          #+#    #+#             */
/*   Updated: 2026/06/07 11:33:00 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	while (src[c] != '\0' && size -1 > c)
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (i);
}
/*
int main (void)
{
	char st[]={"mohammd hajeer"};
	char des[5];
	//printf("%d\n",ft_strlcpy(des,st,11));
	printf("%zu\n",strlcat(des,st,11));
	printf("%s\n",des); //to test what stored in dest
}*/
