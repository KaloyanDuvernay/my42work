/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptrhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 22:08:05 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/13 00:25:00 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

static int	magnitude(uintptr_t u)
{
	int	count;

	count = 1;
	while (u >= 16)
	{
		u /= 16;
		count++;
	}
	return (count);
}

static int	ft_putptrhex_digits(uintptr_t u)
{
	char	*hexbase;
	int		size;
	char	*answer;
	int		count;

	hexbase = "0123456789abcdef";
	size = magnitude(u);
	answer = malloc(sizeof(char) * (size + 1));
	if (answer == NULL)
		return (-1);
	answer += size;
	*answer = '\0';
	while (size--)
	{
		*--answer = hexbase[u % 16];
		u /= 16;
	}
	count = ft_putstr_fd(answer, 1);
	free(answer);
	return (count);
}

int	ft_putptrhex(void *ptr)
{
	uintptr_t	address;
	int			count;
	int			temp;

	if (ptr == NULL)
		return (ft_putstr_fd("(nil)", 1));
	address = (uintptr_t) ptr;
	count = ft_putstr_fd("0x", 1);
	if (count < 0)
		return (-1);
	temp = ft_putptrhex_digits(address);
	if (temp < 0)
		return (-1);
	count += temp;
	return (count);
}
