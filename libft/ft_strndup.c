/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 19:37:41 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 19:44:32 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char	*str_ptr;
	char	*new_str;
	char	*new_str_start;
	size_t	length;

	str_ptr = (char *) str;
	length = 0;
	while (*str_ptr && length < n)
	{
		str_ptr++;
		length++;
	}
	new_str = malloc(length + 1);
	if (new_str == NULL)
		return (NULL);
	new_str_start = new_str;
	str_ptr = (char *) str;
	while (length--)
		*new_str++ = *str_ptr++;
	*new_str = '\0';
	return (new_str_start);
}
