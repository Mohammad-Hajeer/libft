/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 13:27:50 by mohajeer          #+#    #+#             */
/*   Updated: 2026/10/24 13:27:51 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = ft_strlen(s);
	if (start >= i)
		return (ft_strdup(""));
	if (len > i - start)
		len = i - start;
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main(void)
{
    const char *s1 = "Mohammad Hajeer";
    char *s3 = ft_substr(s1,2,8);
    printf("%s\n",s3);
    printf("%s\n", ft_substr("Mohammad Hajeer", 2, 8));
    printf("%s\n", ft_substr("Hello", 2, 10));
    printf("%s\n", ft_substr("Hello", 5, 3));
    printf("%s\n", ft_substr("Hello", 0, 0));
    free(s3);
}*/
