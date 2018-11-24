/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:25:58 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/24 19:47:06 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n && *(char*)s1 == *(char*)s2)
	{
		s1++;
		s2++;
		n--;
	}
	return (n) ? (*(const unsigned char*)s1 - *(const unsigned char *)s2) : (0);
}
