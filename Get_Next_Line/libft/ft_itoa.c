/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 21:40:36 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/08 15:45:00 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_len(long n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nbr;
	size_t	len;
	int		negative;

	nbr = n;
	negative = (nbr < 0);
	len = ft_num_len(nbr);
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (negative)
		nbr = -nbr;
	while (len > (size_t)negative)
	{
		result[--len] = (char)(nbr % 10 + '0');
		nbr /= 10;
	}
	if (negative)
		result[0] = '-';
	return (result);
}
