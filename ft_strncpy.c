/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:52:06 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/24 17:52:39 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*tempo;

	tempo = dst;
	while (len && *src)
	{
		*dst = *src;
		src++;
		dst++;
		len--;
	}
	*dst = '\0';
	return (tempo);
}
