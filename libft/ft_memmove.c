/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 18:15:21 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/08 15:45:00 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*source;

	if (dst == src || len == 0)
		return (dst);
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (dest < source)
		ft_memcpy(dest, source, len);
	else
	{
		while (len > 0)
		{
			len--;
			dest[len] = source[len];
		}
	}
	return (dst);
}
