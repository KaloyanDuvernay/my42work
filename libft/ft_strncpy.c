/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 12:28:56 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 12:52:34 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*start;

	start = dest;
	if (n == 0)
		return (dest);
	while (*src && n)
	{
		*dest++ = *src++;
		n--;
	}
	while (n--)
		*dest++ = '\0';
	return (start);
}
