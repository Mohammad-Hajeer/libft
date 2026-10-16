/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:42:34 by mohajeer          #+#    #+#             */
/*   Updated: 2026/09/22 12:42:37 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
*/

int	ft_isalpha(int num)
{
	if ((num >= 'A' && num <= 'Z') || (num >= 'a' && num <= 'z'))
		return (1);
	else
		return (0);
}
/*


int main()
{
    printf("%d\n",ft_isalpha(7));
}*/
