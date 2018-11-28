/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <cocummin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:15:48 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/28 22:04:10 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s)
{
	char const *tail;

	if (s == NULL)
		return (NULL);
	while (WHITESPACED(*s))
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	tail = s + ft_strlen(s) - 1;
	while (WHITESPACED(*tail))
		tail--;
	return (ft_strsub(s, 0, tail - s + 1));
}
