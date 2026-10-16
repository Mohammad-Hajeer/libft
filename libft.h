/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohajeer <mohajeer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:48:23 by mohajeer          #+#    #+#             */
/*   Updated: 2026/09/22 11:17:26 by mohajeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
//#include <bsd/string.h>
int add(int num1,int num2);
int	ft_strlen(const char *str);
typedef struct s_list
    {
    void *content;
    struct s_list *next;
    } t_list;
    t_list *ft_lstnew(void *content);
    unsigned int ft_lstsize(t_list *lst);
    t_list *ft_lstlast(t_list *lst);
    char    *ft_strdup(const char *s);
    void delet(void *fr);
    void ft_lstdelone(t_list *lst, void (*del)(void*)); 
    void ft_lstclear(t_list **lst, void (*del)(void*));
    void ft_lstiter(t_list *lst, void (*f)(void *));
#endif 