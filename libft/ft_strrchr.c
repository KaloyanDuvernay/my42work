/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 14:43:25 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 14:53:03 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	length;

	str = (char *) s;
	length = ft_strlen(s);
	str += length;
	length++;
	while (length--)
	{
		if (*str == c)
			return (str);
		str--;
	}
	return (NULL);
}
