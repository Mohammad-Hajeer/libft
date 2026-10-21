/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 11:52:05 by mohajeer          #+#    #+#             */
/*   Updated: 2026/09/25 11:52:06 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizeofstring(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = sizeofstring(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int main()
{
    char *str="Mohammad Hajeer";
    printf("%s\n",ft_strrchr(str,'a'));
	printf("%s\n", ft_strrchr("Mohammad Hajeer", 'a'));
	printf("%s\n", ft_strrchr("Mohammad Hajeer", 'M'));
	printf("%s\n", ft_strrchr("Mohammad Hajeer", 'z'));
	printf("%s\n", ft_strrchr("Mohammad Hajeer", '\0'));
}*/