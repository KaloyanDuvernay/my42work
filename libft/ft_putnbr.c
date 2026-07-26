/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 22:07:38 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 22:16:41 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	*nb_str;

	nb_str = ft_itoa(n);
	if (nb_str != NULL)
	{
		ft_putstr(nb_str);
		free(nb_str);
	}
}
