/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 13:25:30 by mohajeer          #+#    #+#             */
/*   Updated: 2026/10/24 13:25:31 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && big[i + j] != '\0'
			&& big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	//char str[] = {"Foo Bar Baz"};
	//char tofind[] = {"Bar"};
	//printf("%s\n",strstr(str,tofind));
	//printf("%s\n",ft_strnstr(str,tofind,7));
	printf("%s\n", ft_strnstr("Foo Bar Baz", "Bar", 7));
	printf("%s\n", ft_strnstr("Foo Bar Baz", "Bar", 6));
	printf("%s\n", ft_strnstr("Foo Bar Baz", "Baz", 11));
	printf("%s\n", ft_strnstr("Foo Bar Baz", "", 0));
}*/
