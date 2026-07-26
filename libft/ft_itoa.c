/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 21:40:36 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 22:16:03 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fillstr(char *ptr, int n)
{
	if (n == 0)
		*ptr-- = '0';
	while (n > 0)
	{
		*ptr-- = ft_intdigittochar(n % 10);
		n /= 10;
	}
}

int	ft_positive_int_len(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		int_len;
	int		minus;
	char	*result;

	minus = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		minus = 1;
		n *= -1;
	}
	int_len = ft_positive_int_len(n);
	result = ft_strnew(minus + int_len);
	if (result == NULL)
		return (NULL);
	ft_fillstr(result + int_len + minus - 1, n);
	if (minus)
		*result = '-';
	return (result);
}
