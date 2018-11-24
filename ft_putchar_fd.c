/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 23:57:13 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/25 00:10:40 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putchar_fd(char c, int fd)
{
	unsigned char cha;

	if (fd <= 0)
		return ;
	cha = (unsigned char)c;
	write(fd, &cha, 1);
}
