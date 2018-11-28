/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <cocummin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:40:22 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/28 21:09:18 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	get_wrds_cnt(char const *s, char c)
{
	int index;
	int result;

	index = 0;
	result = 0;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		if (s[index])
			result++;
		while (s[index] && (s[index] != c))
			index++;
	}
	return (result);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**result;
	int		index;
	int		j;
	int		z;

	index = 0;
	j = 0;
	z = 0;
	if (!s || !c)
		return (NULL);
	if (!(result = (char **)malloc(sizeof(char *) * (get_wrds_cnt(s, c) + 1))))
		return (NULL);
	while (s[index])
	{
		while (s[index] == c)
			index++;
		j = index;
		while (s[index] && s[index] != c)
			index++;
		if (index > j)
			result[z++] = ft_strndup(s + j, index - j);
	}
	result[z] = 0;
	return (result);
}
