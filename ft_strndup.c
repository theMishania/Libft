/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <cocummin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 19:08:48 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/27 20:33:25 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strndup(char const *s, size_t n)
{
    char *result;

    if (!(result = (char *)malloc(sizeof(char) * n + 1)))
        return (NULL);
    result = strncpy(result, s, n);
    result[n] = '\0';
    return (result);
}