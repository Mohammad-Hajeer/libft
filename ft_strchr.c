/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 11:51:58 by mohajeer          #+#    #+#             */
/*   Updated: 2026/09/25 11:52:00 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <stdio.h>
*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char *str="Mohammad Hajeer";
    printf("%s\n",ft_strchr(str,'a'));
}
*/
