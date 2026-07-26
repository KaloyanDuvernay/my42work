/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 22:13:33 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 22:16:55 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nb_str;

	nb_str = ft_itoa(n);
	if (nb_str != NULL)
	{
		ft_putstr_fd(nb_str, fd);
		free(nb_str);
	}
}
