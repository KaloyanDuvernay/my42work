/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:48:16 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/17 13:22:43 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	stash_has_new_line(char * stash, int buff_size)
{
	int count;

	count = 0;
	while(count < buff_size)
	{
		if (stash[count++] == '\n')
			return (1);
	}
	return (0);
}

char *get_next_line(int fd)
{
	char		*result_line;
	char		*buffer;
	static char	*stash;

	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	read(fd, buffer, BUFFER_SIZE);
	return (result_line);
}
