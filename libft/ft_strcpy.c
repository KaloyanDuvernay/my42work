/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 12:27:17 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 12:52:43 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*start;

	start = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = *src;
	return (start);
}
