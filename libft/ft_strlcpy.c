/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 22:03:22 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/08 13:39:33 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t dSize)
{
	size_t	count;
	size_t	len_source;

	count = 0;
	len_source = ft_strlen(source);
	if (dSize == 0)
		return (len_source);
	while (count < dSize - 1)
	{
		destination[count] = source[count];
		count ++;
	}
	destination[count] = '\0';
	return (len_source);
}
