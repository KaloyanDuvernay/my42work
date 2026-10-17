/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:48:16 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/17 19:03:38 by kaloyanduve      ###   ########.fr       */
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

char	*ft_makestring(const char *buffer, ssize_t bytes_read)
{
	char	*result;
	size_t	i;

	if (bytes_read < 0 || (!buffer && bytes_read > 0))
		return (NULL);
	result = malloc((size_t)bytes_read + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < (size_t)bytes_read)
	{
		result[i] = buffer[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*extract_and_update_stash

char *get_next_line(int fd)
{
	char		*result_line;
	char		*buffer;
	char		*last_read_str;
	static char	*stash;

	result_line = NULL;
	if (!(stash || init_stash(&stash)))
		return (NULL);		
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (buffer == NULL)
		return (NULL);
	if (buffer_has_new_line(stash, BUFFER_SIZE))
		return(ft_strextractleft(stash, buffer_has_new_line(stash, BUFFER_SIZE), BUFFER_SIZE));
	last_read_str = ft_makestring(buffer, read(fd, buffer, BUFFER_SIZE));
	result_line = ft_strappend_freefirst(stash, last_read_str);
	while (last_read_str && last_read_str != "")
	{
		if (buffer_has_new_line(buffer, BUFFER_SIZE))
		{
			result_line = ft_strappend_freefirst(result_line, last_read_str);
		}
	}
	return (result_line);
}
