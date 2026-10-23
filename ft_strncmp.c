/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 17:41:36 by mohajeer          #+#    #+#             */
/*   Updated: 2026/06/07 17:44:52 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;//1
	if (n == i)
		return (0);
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int main (void)
{
	char s1[] = {"abc"};
	char s2[] = {"abd"};
	printf("%d\n",ft_strncmp(s1,s2,3));
}
