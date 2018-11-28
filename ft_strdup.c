/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 22:51:36 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/28 20:57:55 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*result;
	size_t	len;

	len = ft_strlen(src) + 1;
	if (!(result = malloc(sizeof(*src) * ft_strlen(src) + 1)))
		return (NULL);
	ft_memcpy(result, src, len);
	return (result);
}
