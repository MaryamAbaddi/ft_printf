/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:50:10 by mabaddi           #+#    #+#             */
/*   Updated: 2025/10/22 13:50:43 by mabaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle(char c, va_list arg)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar((char)va_arg(arg, int));
	else if (c == 's')
		count = ft_putstr(va_arg(arg, char *));
	else if (c == 'i' || c == 'd')
		count = ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		count = ft_unsigned(va_arg(arg, unsigned int));
	else if (c == 'x')
		count = ft_lowerh(va_arg(arg, unsigned int));
	else if (c == 'X')
		count = ft_upperh(va_arg(arg, unsigned int));
	else if (c == '%')
		count = ft_putchar('%');
	else if (c == 'p')
		count = ft_putptr(va_arg(arg, void *));
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		count;
	int		i;
	va_list	arg;

	count = 0;
	i = 0;
	if (!s)
		return (-1);
	va_start(arg, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count += handle(s[i], arg);
		}
		else
		{
			ft_putchar(s[i]);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
