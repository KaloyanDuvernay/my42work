/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:48:16 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/17 18:33:57 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	this_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strappend_freefirst(char *l_string, const char *r_string)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!r_string)
		return (NULL);
	result = malloc(this_strlen(l_string) + this_strlen(r_string) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (l_string && l_string[i])
	{
		result[i] = l_string[i];
		i++;
	}
	j = 0;
	while (r_string[j])
		result[i++] = r_string[j++];
	result[i] = '\0';
	free(l_string);
	return (result);
}

char *get_next_line(int fd)
{
	char		*result_line;
	char		*buffer;
	char		*new_stash_origin;
	static char	*stash;

	result_line = NULL;
	if (!(stash || init_stash(&stash)))
		return (NULL);		
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (buffer == NULL)
		return (NULL);
	new_stash_origin = buffer_has_new_line(stash, BUFFER_SIZE);
	if (new_stash_origin)
		return(ft_strextractleft(stash, new_stash_origin, BUFFER_SIZE));
	while (read(fd, buffer, BUFFER_SIZE) > 0)
	{
		new_stash_origin = buffer_has_new_line(buffer, BUFFER_SIZE);
		while (!new_stash_origin)
			return;
	}
	return (result_line);
}
