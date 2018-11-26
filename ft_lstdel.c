/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:24:02 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/26 20:30:02 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
   t_list *tempo;
   t_list *tmp_list;

    if (!alst || !(*alst))
        return ;
    tempo = *alst;
    while (tempo)
    {
        tmp_list = tempo->next;
        ft_lstdelone(&(tempo), del);
        tempo = tmp_list;
    }
    *alst = NULL;
}