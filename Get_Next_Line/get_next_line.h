/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:48:19 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/17 16:55:17 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 69420
# endif

# include <unistd.h>  // read
# include <stdlib.h>  // malloc, free


char	*get_next_line(int fd);
char	*extract_and_update_stash(char *line, char *buffer, char *stash);
char	*ft_makestring(const char *buffer, ssize_t bytes_read);
char	*ft_strappend_freefirst(char *s1, const char *s2);
char	*buffer_has_new_line(char *stash, int buff_size);
char	*ft_strextractleft(char *origin, char *new_origin, int buff_size);
void	clear_stash(char *stash, int buff_size);
int		init_stash(char **stash);

#endif