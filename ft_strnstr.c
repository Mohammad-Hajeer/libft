/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 16:37:35 by mohajeer          #+#    #+#             */
/*   Updated: 2026/09/25 16:47:54 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int	j;
	char *bigg;
	char *littlee;

	bigg = (char *)big;
	littlee = (char *)little;
	j = 0;
	i = 0;
	if (littlee[0] == '\0')
		return (bigg);
	while (i < len && bigg[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && bigg[i + j] != '\0' && bigg[i + j] == littlee[j])
		{
			j++;
			if (littlee[j] == '\0')
				return (&bigg[i]);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char str[] = {"Foo Bar Baz"};
	char tofind[] = {"Bar"};
	//printf("%s\n",strstr(str,tofind));
	printf("%s\n",ft_strnstr(str,tofind,7));
}
*/