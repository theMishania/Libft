/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:16:59 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/26 20:21:56 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
    if (!alst || !(*alst))
        return ;
    if (del)
        del((*alst)->content, (*alst)->content_size);
    free(*alst);
    *alst = NULL;
}