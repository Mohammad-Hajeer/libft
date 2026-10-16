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

//#include <unistd.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) && n -1 > i)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*
int main (void)
{
	char s1[] = {"abc"};
	char s2[] = {"abd"};
	printf("%d\n",ft_strncmp(s1,s2,3));
}*/
