/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:01:45 by mohajeer          #+#    #+#             */
/*   Updated: 2026/09/22 13:01:47 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
*/

int	ft_isdigit(int num)
{
	if (num >= '0' && num <= '9')
		return (1);
	else
		return (0);
}

/*
int main()
{
    printf("%d\n",ft_isdigit('a'));
}
*/
