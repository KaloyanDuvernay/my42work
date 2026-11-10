/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:45:25 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/11/10 16:53:01 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_double_percent(const char *str_pointer)
{
	if (*str_pointer == '%')
		return (*++str_pointer == '%');
	return (0);
}

int	is_conversion(const char *str_pointer)
{
	str_pointer++;
	return (*str_pointer == 'c' || *str_pointer == 's'
		|| *str_pointer == 'p' || *str_pointer == 'd'
		|| *str_pointer == 'i' || *str_pointer == 'u'
		|| *str_pointer == 'x' || *str_pointer == 'X');
}

// the pointer is currently on '%'; check next character:
// the function manages cspdiuxX conversions.
int	manage_conversion(const char *str_pointer, va_list *args)
{
	int	count;

	count = 0;
	str_pointer++;
	if (*str_pointer == 'd' || *str_pointer == 'i')
		count += ft_putnbr_fd(va_arg(*args, int), 1);
	else if (*str_pointer == 'c')
		count += ft_putchar_fd(va_arg(*args, int), 1);
	else if (*str_pointer == 's')
		count += ft_putstr_fd(va_arg(*args, char *), 1);
	else if (*str_pointer == 'u')
		count += ft_putunbr(va_arg(*args, unsigned int));
	else if (*str_pointer == 'x')
		count += ft_puthexlower(va_arg(*args, unsigned int));
	else if (*str_pointer == 'X')
		count += ft_puthexupper(va_arg(*args, unsigned int));
	else if (*str_pointer == 'p')
		count += ft_putptrhex(va_arg(*args, void *));
	return (count);
}

static int	print_format(const char *str, va_list *args)
{
	int	count;
	int	temp;

	count = 0;
	while (*str)
	{
		temp = 0;
		if (*str != '%')
			temp = ft_putchar_fd(*str, 1);
		else if (is_double_percent(str))
		{
			temp = ft_putchar_fd('%', 1);
			str++;
		}
		else if (is_conversion(str))
		{
			temp = manage_conversion(str, args);
			str++;
		}
		if (temp < 0)
			return (-1);
		count += temp;
		str++;
	}
	return (count);
}

int	ft_printf(const char *input_str, ...)
{
	va_list	args;
	int		count;

	va_start(args, input_str);
	count = print_format(input_str, &args);
	va_end(args);
	return (count);
}
