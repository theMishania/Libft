/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:52:06 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/28 20:59:31 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t index;

	index = -1;
	while (++index < len)
		if (*(src + index))
			*(dst + index) = *(src + index);
		else
			while (index < len)
				*(dst + index++) = '\0';
	return (dst);
}
