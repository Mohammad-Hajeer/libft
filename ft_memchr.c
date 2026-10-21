/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 14:44:44 by mohajeer          #+#    #+#             */
/*   Updated: 2026/09/25 15:18:26 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *) s;
	while (n--)
	{
		if (*a != (unsigned char)c)
			a++;
		else
			return ((void *)a);
	}
	return (0);
}
/*
int main ()
{
	char myStr[] = "hello  wrld !";
	char *myPtr = (char*)ft_memchr(myStr, 'o', 5);
	if (myPtr != NULL)
	 	printf("%s", myPtr);
}*/
