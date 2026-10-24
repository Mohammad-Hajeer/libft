/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 13:27:28 by mohajeer          #+#    #+#             */
/*   Updated: 2026/10/24 13:27:29 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip(char const *s1, char const *set)
{
	int	j;

	j = 0;
	while (s1[j] && ft_strchr(set, s1[j]))
		j++;
	return (j);
}

static int	end_trim(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i >= 0 && ft_strchr(set, s1[i]))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	int		i;
	char	*ptr;

	j = skip(s1, set);
	i = end_trim(s1, set);
	if (i < j)
		return (ft_strdup(""));
	ptr = malloc(i - j + 2);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + j, i - j + 2);
	return (ptr);
}
/*
int main(void)
{
    printf("%s\n",ft_strtrim("xxzxyzxzHelloxxx", "xyz"));
}*/
