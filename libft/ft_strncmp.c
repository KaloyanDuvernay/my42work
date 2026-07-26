/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 15:11:22 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 15:13:14 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*s1_ptr;
	char	*s2_ptr;

	s1_ptr = (char *) s1;
	s2_ptr = (char *) s2;
	while (n && *s1_ptr && *s2_ptr && *s1_ptr == *s2_ptr)
	{
		s1_ptr++;
		s2_ptr++;
		n--;
	}
	return (*s1_ptr - *s2_ptr);
}
