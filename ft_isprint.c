/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:47:37 by mohajeer          #+#    #+#             */
/*   Updated: 2026/09/22 14:47:39 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
*/

int	ft_isprint(int num)
{
	if (num >= 32 && num <= 126)
		return (1);
	else
		return (0);
}

/*
int main()
{
    printf("%d\n",ft_isprint(127));
}
*/
