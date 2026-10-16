/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:49:37 by mohajeer          #+#    #+#             */
/*   Updated: 2026/09/25 16:03:44 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	unsigned char *s11;
	unsigned char *s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((s11[i] != '\0' && s22[i] != '\0' && s11[i] == s22[i]) && n -1 > i)
		i++;
	return ((unsigned char) s11[i] - (unsigned char) s22[i]);
}



int main (void)
{
	char s1[] = {"sbb"};
	char s2[] = {"aba"};
	printf("%d\n",ft_memcmp(s1,s2,3));
}
