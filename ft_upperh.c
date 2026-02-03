/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperh_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:47:09 by mabaddi           #+#    #+#             */
/*   Updated: 2025/10/22 13:47:11 by mabaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upperh(unsigned int n)
{
	int		count;
	int		digit;
	char	c;

	count = 0;
	if (n >= 16)
		count += ft_upperh(n / 16);
	digit = n % 16;
	if (digit < 10)
		c = '0' + digit;
	else
		c = 'A' + (digit - 10);
	count += ft_putchar(c);
	return (count);
}
