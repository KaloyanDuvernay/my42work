/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:48:16 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/17 14:30:14 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*stash_has_new_line(char *stash, int buff_size)
{
	int count;

	count = 0;
	while(count < buff_size)
	{
		if (stash[count++] == '\n')
			return (&stash[count]);
	}
	return (NULL);
}

char *get_next_line(int fd)
{
	char		*result_line;
	char		*buffer;
	static char	*stash;

	if (stash == NULL)
	{
		stash = malloc(sizeof(char) * BUFFER_SIZE);
		if (stash == NULL)
			return (NULL);
	}
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	stash = read(fd, buffer, BUFFER_SIZE);
	return (result_line);
}
