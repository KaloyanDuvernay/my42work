/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 14:07:31 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 14:39:27 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	if (n == 0)
		return (0);
	s1_ptr = (unsigned char *) s1;
	s2_ptr = (unsigned char *) s2;
	while (*s1_ptr == *s2_ptr && n)
	{
		n--;
		if (n == 0)
			return (*s1_ptr - *s2_ptr);
		s1_ptr++;
		s2_ptr++;
	}
	return (*s1_ptr - *s2_ptr);
}
