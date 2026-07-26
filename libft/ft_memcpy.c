/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:42:45 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/25 18:00:06 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_ptr;
	char	*src_ptr;

	dest_ptr = (char *) dest;
	src_ptr = (char *) src;
	while (n--)
	{
		*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}
