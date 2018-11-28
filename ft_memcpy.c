/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <cocummin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:23:59 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/28 21:56:07 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_tempo;
	const unsigned char	*src_tempo;

	dst_tempo = (unsigned char *)dst;
	src_tempo = (unsigned char *)src;
	while (n-- > 0)
		*(dst_tempo++) = *(src_tempo++);
	return (dst);
}
