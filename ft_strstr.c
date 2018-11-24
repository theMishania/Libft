/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:55:42 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/24 17:56:08 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *heystack, const char *needle)
{
	int j;

	if (ft_strlen(needle) == 0)
		return ((char *)heystack);
	while (*heystack)
	{
		j = 0;
		if (*heystack == needle[j])
		{
			while (needle[j] && needle[j] == *(heystack + j))
				j++;
			if (needle[j] == '\0')
				return ((char *)heystack);
		}
		heystack++;
	}
	return (NULL);
}
