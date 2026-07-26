/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 19:09:05 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 19:10:59 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	char			*new_str_start;
	unsigned int	i;

	new_str = ft_strdup(s);
	new_str_start = new_str;
	if (new_str != NULL)
	{
		i = 0;
		while (*new_str)
		{
			*new_str = f(i, *new_str);
			new_str++;
			i++;
		}
	}
	return (new_str_start);
}
