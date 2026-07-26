/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 15:17:41 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 16:38:04 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*src_ptr;
	char	*start;

	if (n == 0)
		return (dest);
	start = dest;
	src_ptr = (char *) src;
	while (*dest)
	{
		dest++;
	}
	while (*src_ptr && n)
	{
		*dest++ = *src_ptr++;
		n--;
	}
	*dest = '\0';
	return (start);
}
