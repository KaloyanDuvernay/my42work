/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 22:03:40 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/11/10 16:55:55 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	count;
	int	temp;

	if (s == NULL)
		s = "(null)";
	count = 0;
	while (*s != '\0')
	{
		temp = ft_putchar_fd(*s, fd);
		if (temp < 0)
			return (-1);
		count += temp;
		s++;
	}
	return (count);
}
