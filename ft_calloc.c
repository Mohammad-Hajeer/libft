/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testcalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 11:52:12 by mohajeer          #+#    #+#             */
/*   Updated: 2026/09/25 11:52:13 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdlib.h>
#include <stdio.h>
*/
void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	size_t	i;
	char	*byte;

	i = 0;
	ptr = malloc(nelem * elsize);
	if (ptr == NULL)
		return (NULL);
	byte = (char *)ptr;
	while (i < (nelem * elsize))
	{
		byte[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int main()
{
    int *pt = ft_calloc(5,4);
    printf("%d\n%d\n",pt[0],pt[21]);
}*/
