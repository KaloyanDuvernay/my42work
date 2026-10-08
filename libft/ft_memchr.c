/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 13:58:16 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/08 12:30:00 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		target;

	str = (const unsigned char *)s;
	target = (unsigned char)c;
	while (n > 0)
	{
		if (*str == target)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}
