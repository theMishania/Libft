/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:41:44 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/24 22:05:53 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	char	*tempo;
	int		result_len;

	if (!s1)
		return (NULL);
	result_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(result = (char *)malloc(sizeof(*s1) * result_len)))
		return (NULL);
	tempo = result;
	while (*s1)
		*(result++) = *(s1++);
	while (*s2)
		*(result++) = *(s2++);
	*result = '\0';
	return (tempo);
}
