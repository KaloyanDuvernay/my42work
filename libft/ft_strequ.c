/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 19:12:01 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 20:16:40 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	char	*s1_ptr;
	char	*s2_ptr;

	s1_ptr = (char *) s1;
	s2_ptr = (char *) s2;
	while (*s1_ptr && *s2_ptr)
		if (*s1_ptr++ != *s2_ptr++)
			return (0);
	if (!(!*s1_ptr && !*s2_ptr))
		return (0);
	return (1);
}
