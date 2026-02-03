/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowerh_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:45:25 by mabaddi           #+#    #+#             */
/*   Updated: 2025/10/22 13:45:32 by mabaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lowerh(unsigned int n)
{
	int		count;
	int		digit;
	char	c;

	count = 0;
	if (n >= 16)
		count += ft_lowerh(n / 16);
	digit = n % 16;
	if (digit < 10)
		c = '0' + digit;
	else
		c = 'a' + (digit - 10);
	count += ft_putchar(c);
	return (count);
}
