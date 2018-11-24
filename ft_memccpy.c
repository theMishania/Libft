/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:26:53 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/25 00:51:07 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*dst_tempo;
	char	*src_tempo;
	size_t	index;

	dst_tempo = (char *)dst;
	src_tempo = (char *)src;
	index = 0;
	while (index < n)
	{
		*(dst_tempo + index) = *(src_tempo + index);
		if (*(unsigned char *)(src_tempo + index) == (unsigned char)c)
			return ((char *)dst + index + 1);
		index++;
	}
	return (NULL);
}
