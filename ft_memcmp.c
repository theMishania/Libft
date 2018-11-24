/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:25:58 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/24 17:26:13 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_tempo;
	unsigned char *s2_tempo;

	s1_tempo = (unsigned char *)s1;
	s2_tempo = (unsigned char *)s2;
	while (n && *s1_tempo && s1_tempo == s2_tempo)
	{
		s1_tempo++;
		s2_tempo++;
		n--;
	}
	return (n) ? (int)(*s1_tempo - *s2_tempo) : (0);
}
