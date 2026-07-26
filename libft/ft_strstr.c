/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 14:54:10 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 16:49:37 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *filter)
{
	char	*src_ptr;
	char	*filter_ptr;
	size_t	length;

	if (!*filter)
		return ((char *) src);
	if (!*src)
		return (NULL);
	length = ft_strlen(filter);
	src_ptr = (char *) src;
	filter_ptr = (char *) filter;
	while (*src_ptr)
	{
		if (ft_strncmp(src_ptr, filter_ptr, length) == 0)
			return (src_ptr);
		src_ptr++;
	}
	return (NULL);
}
