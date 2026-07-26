/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 18:02:17 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/25 18:14:40 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dest_ptr;
	char	*src_ptr;

	dest_ptr = (char *) dest;
	src_ptr = (char *) src;
	while (n--)
	{
		*dest_ptr = *src_ptr++;
		if (*dest_ptr++ == (char) c)
			return (dest_ptr);
	}
	return (NULL);
}
