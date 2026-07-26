/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 13:37:55 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 13:45:10 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	length;
	char	*new_str;

	length = ft_strlen(s);
	new_str = malloc(sizeof(char) * (length + 1));
	if (new_str == NULL)
		return (NULL);
	ft_strcpy(new_str, s);
	return (new_str);
}
