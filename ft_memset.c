/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:31:41 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/24 17:31:54 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *tempo;

	tempo = (unsigned char *)b;
	while (len > 0)
	{
		*tempo = (unsigned char)c;
		len--;
		tempo++;
	}
	return (b);
}
