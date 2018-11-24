/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:23:59 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/24 17:24:34 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char		*dst_tempo;
	const unsigned char	*src_tempo;

	dst_tempo = (unsigned char *)dst;
	src_tempo = (unsigned char *)src;
	while (n-- > 0)
		*(dst_tempo++) = *(src_tempo++);
	return (dst);
}
