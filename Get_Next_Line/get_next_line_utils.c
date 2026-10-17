/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:48:11 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/17 17:07:00 by kaloyanduve      ###   ########.fr       */
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
	*stash = malloc(BUFFER_SIZE);
	if (!*stash)
		return (0);
	clear_stash(*stash, BUFFER_SIZE);
	return (1);
}

char	*stash_has_new_line(char *stash, int buff_size)
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

char	*ft_strextractleft(char *origin, char *new_origin, int buff_size)
{
	char	*extracted;
	int		i;
	int		j;

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
	j = -1;
	while (++j < i)
		extracted[j] = origin[j];
	extracted[i] = '\0';
	j = 0;
	while (i + j < buff_size)
	{
		origin[j] = origin[i + j];
		j++;
	}
	while (j < buff_size)
		origin[j++] = '\0';
	return (extracted);
}
