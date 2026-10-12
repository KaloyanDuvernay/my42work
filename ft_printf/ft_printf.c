/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:45:25 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/12 23:45:15 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int is_double_percent(const char *str_pointer)
{
	if (*str_pointer == '%')
		return (*++str_pointer == '%');
	return (0);
}

int is_conversion(const char *str_pointer)
{
	str_pointer++;
	return (*str_pointer == 'c' || *str_pointer == 's'
		|| *str_pointer == 'p' || *str_pointer == 'd'
		|| *str_pointer == 'i' || *str_pointer == 'u'
		|| *str_pointer == 'x' || *str_pointer == 'X');
}

// the pointer is currently on '%'; check next character:
// the function manages cspdiuxX conversions.
int manage_conversion(const char *str_pointer, va_list args)
{
	int count;

	count == 0;
	str_pointer++;
	if (*str_pointer == 'd' || *str_pointer == 'i')
		count += ft_putnbr_fd(va_arg(args, int), 1);
	else if (*str_pointer == 'c')
		count += ft_putchar_fd(va_arg(args, char), 1);
	else if (*str_pointer == 's')
		count += ft_putstr_fd(va_arg(args, char *), 1);
	else if (*str_pointer == 'u')
		count += ft_putnbr_fd(va_arg(args, int), 1);
	//TODO
	else if (*str_pointer == 'x')
		count += ft_puthexlower_fd(va_arg(args, unsigned int), 1);
	//TODO
	else if (*str_pointer == 'X')
		count += ft_puthexupper_fd(va_arg(args, unsigned int), 1);
	//TODO
	else if (*str_pointer == 'p')
		count += ft_putptrhex(va_arg(args, void *));
	return (count);
}

int ft_printf(const char *input_str, ...)
{
	va_list args;
	int count;

	count = 0;
	va_start(args, input_str);
	while (*input_str)
	{
		if (*input_str != '%')
			count += ft_putchar_fd(*input_str, 1);
		else if (is_double_percent(input_str))
		{
			count += ft_putchar_fd('%', 1);
			input_str ++;
		}
		else if (is_conversion(input_str))
		{
			count += manage_conversion(input_str, args);
			input_str++;
		}
		input_str++;
	}
	va_end(args);
	return (count);
}
