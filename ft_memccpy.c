/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:26:53 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/24 18:21:13 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dst_tempo;
	unsigned char *src_tempo;
	unsigned char cym;

	cym = (unsigned char)c;
	dst_tempo = (unsigned char *)dst;
	src_tempo = (unsigned char *)src;
	while (n > 0)
	{
		if (*src_tempo == cym)
			return (++dst_tempo);
		dst_tempo++;
		src_tempo++;
	}
	return (NULL);
}
