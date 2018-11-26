/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:15:48 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/26 20:16:14 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#define WHITESPACED(a) a == ' ' || a == '\n' || a == '\t'

char    *ft_strtrim(char const *s)
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