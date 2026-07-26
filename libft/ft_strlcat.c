/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 15:19:28 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 16:47:59 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lenhelper(char *dest, size_t size)
{
	size_t	dest_len;

	dest_len = 0;
	while (dest_len < size && dest[dest_len])
		dest_len++;
	return (dest_len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	char	*dest_ptr;
	char	*src_ptr;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_lenhelper(dest, size);
	dest_ptr = dest;
	src_ptr = (char *) src;
	if (size <= dest_len)
		return (src_len + size);
	while (i < dest_len)
	{
		dest_ptr++;
		i++;
	}
	while (i < size - 1 && *src_ptr)
	{
		*dest_ptr++ = *src_ptr++;
		i++;
	}
	*dest_ptr = '\0';
	return (src_len + dest_len);
}
