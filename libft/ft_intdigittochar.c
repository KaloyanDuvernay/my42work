/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intdigittochar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 21:25:09 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 21:25:44 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intdigittochar(int c)
{
	if (c >= 0 && c <= 9)
		return (c + '0');
	return (c);
}