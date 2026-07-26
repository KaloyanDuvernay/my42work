/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 19:58:34 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 22:21:56 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespacehelper(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	size_t	len;
	int		start_index;
	int		end_index;
	int		to_be_trimmed;

	to_be_trimmed = 0;
	len = ft_strlen(s);
	start_index = 0;
	end_index = len - 1;
	while (ft_iswhitespacehelper(s[start_index]))
	{
		to_be_trimmed = 1;
		start_index++;
	}
	while (ft_iswhitespacehelper(s[end_index]) && end_index >= 0)
	{
		to_be_trimmed = 1;
		end_index--;
	}
	if (!to_be_trimmed)
		return ((char *) s);
	if (end_index >= start_index)
		return (ft_strndup(&s[start_index], end_index - start_index + 1));
	return (ft_strnew(0));
}
