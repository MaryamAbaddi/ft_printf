/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:51:48 by mabaddi           #+#    #+#             */
/*   Updated: 2025/10/22 13:52:39 by mabaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_printf(const char *s, ...);
int	ft_putstr(char *s);
int	ft_putptr(void *ptr);
int	ft_upperh(unsigned int n);
int	ft_lowerh(unsigned int n);
int	ft_unsigned(unsigned int n);

#endif
