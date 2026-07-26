/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 19:24:28 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 20:15:56 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*s1_ptr;
	char	*s2_ptr;

	s1_ptr = (char *) s1;
	s2_ptr = (char *) s2;
	while (*s1_ptr && *s2_ptr && n)
	{
		if (*s1_ptr++ != *s2_ptr++)
			return (0);
		n--;
	}
	if (!(!*s1_ptr && !*s2_ptr) && n)
		return (0);
	return (1);
}
