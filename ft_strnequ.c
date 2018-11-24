/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:52:54 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/24 19:56:37 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (n > ft_strlen(s1) || n > ft_strlen(s2))
		return (ft_strequ(s1, s2));
	while (n-- && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
	}
	return (1);
}
