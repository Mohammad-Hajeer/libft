/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:13:55 by mohajeer          #+#    #+#             */
/*   Updated: 2026/09/22 13:13:57 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
*/

int	ft_isalnum(int num)
{
	if (num >= '0' && num <= '9')
		return (1);
	else if ((num >= 'A' && num <= 'Z') || (num >= 'a' && num <= 'z'))
		return (1);
	else
		return (0);
}

/*
int main()
{
    printf("%d\n",ft_isalnum('='));
}
*/
