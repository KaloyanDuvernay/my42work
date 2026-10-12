/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 22:12:43 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/13 00:05:24 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int magnitude(unsigned int u)
{
	int counter;

	counter = 1;
	while(u >= 10)
	{
		u /= 10;
		counter++;
	}
	return (counter);
}


int ft_putunbr(unsigned int u)
{
	int size;
	int size_mem;
	char *answer;
	int digit;
	char *start;

	size = magnitude(u);
	size_mem = size;
	answer = malloc(sizeof(char) * (size + 1));
	start = answer;
	if (answer == NULL)
		return (0);
	answer += size;
	*answer = '\0';
	while(size--)
	{
		digit = u % 10;
		u /= 10;
		*--answer = digit + '0';
	}
	while(*answer)
		ft_putchar_fd(*answer++, 1);
	free(start);
	return (size_mem);
}
