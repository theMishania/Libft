/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:53:51 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/24 17:54:27 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int index;

	index = ft_strlen(s);
	s += index;
	while (index >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		index--;
	}
	return (NULL);
}
