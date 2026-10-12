/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 23:42:58 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/13 00:02:27 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int magnitude(unsigned int u)
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

int ft_puthexupper(unsigned int u)
{
	char *hexbase;
	int size;
	char *answer;
	int count;

	hexbase = "0123456789ABCDEF";
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