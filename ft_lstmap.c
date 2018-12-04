/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <cocummin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:51:05 by cocummin          #+#    #+#             */
/*   Updated: 2018/12/04 16:43:24 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;
	t_list	*tempo;
	t_list	*tmp_new;

	if (!lst || !f)
		return (NULL);
	if (!(result = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	result = f(result);
	tempo = result;
	lst = lst->next;
	while (lst)
	{
		if (!(tmp_new = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		tmp_new = f(tmp_new);
		tempo->next = tmp_new;
		tempo = tempo->next;
		lst = lst->next;
	}
	return (result);
}
