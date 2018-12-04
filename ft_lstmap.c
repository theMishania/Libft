/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <cocummin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:51:05 by cocummin          #+#    #+#             */
/*   Updated: 2018/12/04 20:26:18 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstclear(t_list *list)
{
	while (list)
	{
		free(list->content);
		free(list);
		list = list->next;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;
	t_list	*tempo;
	t_list	*tmp_new;

	if (!lst || !f)
		return (NULL);
	if (!(result = f(lst)))
		return (NULL);
	tempo = result;
	lst = lst->next;
	while (lst)
	{
		if (!(tmp_new = f(lst)))
		{
			ft_lstclear(result);
			return (NULL);
		}
		tempo->next = tmp_new;
		tempo = tempo->next;
		lst = lst->next;
	}
	return (result);
}
