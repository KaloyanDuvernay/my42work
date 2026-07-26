/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 16:02:51 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 16:49:46 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *filter, size_t size)
{
	char	*src_ptr;
	char	*filter_ptr;
	size_t	length;

	if (!*filter)
		return ((char *) src);
	length = ft_strlen(filter);
	if (!*src || size < length)
		return (NULL);
	src_ptr = (char *) src;
	filter_ptr = (char *) filter;
	while (*src_ptr && size >= length)
	{
		if (ft_strncmp(src_ptr, filter_ptr, length) == 0)
			return (src_ptr);
		src_ptr++;
		size--;
	}
	return (NULL);
}
