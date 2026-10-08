/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 22:03:22 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/07 22:14:58 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *destination, const char *source, size_t destinationSize)
{
	size_t count;
	size_t len_source;

	count = 0;
	len_source = ft_strlen(source);
	if (destinationSize == 0)
		return (len_source);
	while (count < destinationSize - 1)
	{
		destination[count] = source[count];
		count ++;
	}
	destination[count] = '\0';
	return (len_source);
}