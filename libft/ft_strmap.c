/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 18:52:59 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 19:08:26 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	char	*new_str_start;

	new_str = ft_strdup(s);
	new_str_start = new_str;
	if (new_str != NULL)
	{
		while (*new_str)
		{
			*new_str = f(*new_str);
			new_str++;
		}
	}
	return (new_str_start);
}
