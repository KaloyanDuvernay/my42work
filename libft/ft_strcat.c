/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 15:16:57 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 16:38:36 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*src_ptr;
	char	*start;

	start = dest;
	src_ptr = (char *) src;
	while (*dest)
	{
		dest++;
	}
	while (*src_ptr)
		*dest++ = *src_ptr++;
	*dest = *src_ptr;
	return (start);
}
