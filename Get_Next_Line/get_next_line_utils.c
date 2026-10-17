/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:48:11 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/17 18:53:40 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	clear_stash(char *stash, int buff_size)
{
	int	i;

	i = 0;
	while (i < buff_size)
		stash[i++] = '\0';
}

int	init_stash(char **stash)
{
	*stash = malloc(BUFFER_SIZE + 1);
	if (!*stash)
		return (0);
	clear_stash(*stash, BUFFER_SIZE + 1);
	return (1);
}

char	*buffer_has_new_line(char *stash, int buff_size)
{
	int	count;

	count = 0;
	while (count < buff_size)
	{
		if (stash[count++] == '\n')
			return (&stash[count]);
	}
	return (NULL);
}

static void	shift_stash(char *origin, int offset, int size)
{
	int	i;

	i = 0;
	while (offset + i < size)
	{
		origin[i] = origin[offset + i];
		i++;
	}
	clear_stash(origin + i, offset);
}

char	*ft_strextractleft(char *origin, char *new_origin, int buff_size)
{
	char	*extracted;
	int		i;

	if (!origin || !new_origin || buff_size <= 0)
		return (NULL);
	i = 0;
	while (i <= buff_size && origin + i != new_origin)
		i++;
	if (i > buff_size)
		return (NULL);
	extracted = malloc((size_t)i + 1);
	if (!extracted)
		return (NULL);
	i = 0;
	while (origin + i < new_origin)
	{
		extracted[i] = origin[i];
		i++;
	}
	extracted[i] = '\0';
	shift_stash(origin, i, buff_size);
	return (extracted);
}
