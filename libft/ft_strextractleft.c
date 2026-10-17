/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strextractleft.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 13:33:00 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/17 13:33:00 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strextractleft(char *origin, char *new_origin, int buffer_size)
{
	char	*extracted;
	size_t	i;
	size_t	size;

	if (!origin || !new_origin || buffer_size <= 0)
		return (NULL);
	size = (size_t)buffer_size;
	i = 0;
	while (i <= size && origin + i != new_origin)
		i++;
	if (i > size)
		return (NULL);
	extracted = malloc(i + 1);
	if (!extracted)
		return (NULL);
	ft_memcpy(extracted, origin, i);
	extracted[i] = '\0';
	ft_memmove(origin, new_origin, size - i);
	ft_bzero(origin + size - i, i);
	return (extracted);
}
