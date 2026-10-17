/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:48:16 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/17 17:29:05 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	append_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strappend_freefirst(char *s1, const char *s2)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!s2)
		return (NULL);
	result = malloc(append_strlen(s1) + append_strlen(s2) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		result[i++] = s2[j++];
	result[i] = '\0';
	free(s1);
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
