/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:01:56 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/29 18:39:19 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "libft/libft.h"

int	char_format(va_list args, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count = ft_putchar_fd(va_arg(args, int), 1);
	if (format == 's')
		count = ft_putstr_fd(va_arg(args, char *), 1);
	return (count);
}

int	nbr_format(va_list args, const char format)
{
	int	count;

	count = 0;
	if (format == 'd' || format == 'i')
		count = ft_putnbr_fd(va_arg(args, int), 1, 0);
	if (format == 'u')
		count = ft_u_putnbr_fd(va_arg(args, int), 1, 0);
	return (count);
}

int	check_format(va_list args, const char format)
{
	if (format == 'd' || format == 'i' || format == 'u')
		return (nbr_format(args, format));
	if (format == 'c' || format == 's')
		return (char_format(args, format));
	return (0);
}

int	ft_printf(const char *PARAM, ...)
{
	size_t	count;
	va_list	args;
	size_t	i;

	i = 0;
	count = 0;
	va_start(args, PARAM);
	while (PARAM[i] != '\0')
	{
		if (PARAM[i] == '%')
		{
			i++;
			count += check_format(args, PARAM[i]);
		}
		else
		{
			ft_putchar_fd(PARAM[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

// int main(void)
// {
// 	printf("\nCOUNT=%d\n",printf("he%c",'d'));
// 	printf("\nCOUNT=%d\n",ft_printf("he%c",'d'));
// 	return (0);
// }
