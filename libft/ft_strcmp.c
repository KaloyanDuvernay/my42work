/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 14:56:19 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 15:02:21 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	char	*s1_ptr;
	char	*s2_ptr;

	s1_ptr = (char *) s1;
	s2_ptr = (char *) s2;
	while (*s1_ptr && *s2_ptr && *s1_ptr == *s2_ptr)
	{
		s1_ptr++;
		s2_ptr++;
	}
	return (*s1_ptr - *s2_ptr);
}
