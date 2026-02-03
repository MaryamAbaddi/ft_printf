/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:47:27 by mabaddi           #+#    #+#             */
/*   Updated: 2025/10/22 13:47:30 by mabaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count += ft_unsigned(n / 10);
	c = (n % 10) + '0';
	count += ft_putchar(c);
	return (count);
}
