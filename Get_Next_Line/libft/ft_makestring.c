/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makestring.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:00:00 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/17 16:04:14 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Note: Designed to convert bytes returned by read() into a C string.
// A positive read count copies that many bytes and adds a null terminator.
// A count of 0 (EOF) returns an allocated empty string ("").
// A negative count (read error) returns NULL; malloc failure also returns NULL.
// The caller owns the returned string and must free it.

char	*ft_makestring(const char *buffer, ssize_t bytes_read)
{
	char	*result;
	size_t	length;

	if (bytes_read < 0 || (!buffer && bytes_read > 0))
		return (NULL);
	length = (size_t)bytes_read;
	result = malloc(length + 1);
	if (!result)
		return (NULL);
	if (length)
		ft_memcpy(result, buffer, length);
	result[length] = '\0';
	return (result);
}
