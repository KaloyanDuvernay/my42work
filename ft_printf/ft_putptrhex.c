/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptrhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 22:08:05 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/13 00:02:37 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

static int magnitude(uintptr_t u)
{
	int count;

	count = 1;
	while(u >= 16)
	{
		u /= 16;
		count++;
	}
	return (count);
}

static int ft_puthexlower(uintptr_t u)
{
	char *hexbase;
	int size;
	char *answer;
	int count;

	hexbase = "0123456789abcdef";
	size = magnitude(u);
	answer = malloc(sizeof(char) * (size + 1));
	if (answer == NULL)
		return (0);
	answer += size;
	*answer = '\0';
	while(size--)
	{
		*--answer = hexbase[u % 16];
		u /= 16;
	}
	count = ft_putstr_fd(answer, 1);
	free(answer);
	return (count);
}

int ft_putptrhex(void *ptr)
{
	uintptr_t address;
	int count;

	address = (uintptr_t) ptr;
	count = ft_putstr_fd("0x", 1);
	count += ft_puthexlower(address);
	return (count);
}