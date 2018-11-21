/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 22:51:36 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/20 21:14:39 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*result;
	int		index;

	result = (char *)malloc(sizeof(*src) * ft_strlen(src));
	index = 0;
	while (src[index] != '\0')
	{
		result[index] = src[index];
		index++;
	}
	result[index] = '\0';
	return (result);
}
