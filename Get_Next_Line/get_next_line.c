/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:48:16 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/17 15:01:41 by kaloyanduve      ###   ########.fr       */
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
	char		*new_stash_origin;
	static char	*stash;

	if (stash == NULL)
	{
		stash = malloc(sizeof(char) * BUFFER_SIZE);
		if (stash == NULL)
			return (NULL);
	}
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (buffer == NULL)
		return (NULL);
	new_stash_origin = stash_has_new_line(stash, BUFFER_SIZE);
	if (new_stash_origin)
		return(ft_strextractleft(stash, new_stash_origin, BUFFER_SIZE));
	while()
	stash = read(fd, buffer, BUFFER_SIZE);
	return (result_line);
}
