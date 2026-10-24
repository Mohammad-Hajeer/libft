/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 13:23:46 by mohajeer          #+#    #+#             */
/*   Updated: 2026/10/24 13:23:47 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	i;
	size_t	len;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (len)
	{
		ptr[i] = f(i, s[i]);
		len--;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
char	ft_toupper_index(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char	*ptr;

	ptr = ft_strmapi("hello world", ft_toupper_index);
	if (ptr == NULL)
		return (1);
	printf("Result: %s\n", ptr);
	free(ptr);
	return (0);
}*/
