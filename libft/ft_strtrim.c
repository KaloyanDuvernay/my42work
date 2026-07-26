/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 19:58:34 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 20:15:25 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	iswhitespacehelper(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	size_t	len;
	int		start_index;
	int		end_index;
	int		to_be_trimmed;
	char	*new_str;

	to_be_trimmed = 0;
	len = ft_strlen(s);
	start_index = 0;
	end_index = len - 1;
	while (iswhitespacehelper(s[start_index]))
	{
		to_be_trimmed = 1;
		start_index++;
	}
	while (iswhitespacehelper(s[end_index]) && end_index >= 0)
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
