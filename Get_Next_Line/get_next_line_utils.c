/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:48:11 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/17 16:29:41 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	clear_stash(char *stash, int buff_size)
{
	ft_memset((void *) stash, 0, buff_size);
}

static int	init_stash(char **stash)
{
	*stash = malloc(BUFFER_SIZE);
	return (*stash != NULL);
}
