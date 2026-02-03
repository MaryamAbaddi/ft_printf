/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:46:50 by mabaddi           #+#    #+#             */
/*   Updated: 2025/10/22 13:46:52 by mabaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_putptr_fd_rec(unsigned long ptr, int fd)
// {
// 	int		count;
// 	char	*hex;

// 	count = 0;
// 	hex = "0123456789abcdef";
// 	if (ptr >= 16)
// 		count += ft_putptr_fd_rec(ptr / 16, fd);
// 	count += ft_putchar_fd(hex[ptr % 16], fd);
// 	return (count);
// }

// int	ft_putptr_fd(void *ptr, int fd)
// {
// 	int				count;
// 	unsigned long	arr;

// 	count = 0;
// 	arr = (unsigned long)ptr;
// 	if (!arr)
// 		{
// 			write(1, "nill", 4);
// 			return (5);
// 		}
// 		else
// 			{
// 				count += ft_putstr_fd("0x", fd);
// 				count += ft_putptr_fd_rec(arr, fd);
// 			}
// 	return (count);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:46:50 by mabaddi           #+#    #+#             */
/*   Updated: 2025/10/22 13:46:52 by mabaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_rec(unsigned long ptr)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (ptr >= 16)
		count += ft_putptr_rec(ptr / 16);
	count += ft_putchar(hex[ptr % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	unsigned long	arr;
	int				count;

	arr = (unsigned long)ptr;
	count = 0;
	if (!arr)
		return (write(1, "(nil)", 5));
	count += ft_putstr("0x");
	count += ft_putptr_rec(arr);
	return (count);
}
