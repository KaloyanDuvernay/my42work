/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 16:12:05 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 16:44:10 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *const_str)
{
	char	*str;
	int		result;
	int		sign;

	sign = 1;
	result = 0;
	str = (char *) const_str;
	while (*str && ft_isspace(*str))
		str++;
	if (!ft_isdigit(*str) && !ft_issign(*str))
		return (0);
	else if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		result = result * 10 + ft_chardigittoint(*str);
		str++;
	}
	return (result * sign);
}
