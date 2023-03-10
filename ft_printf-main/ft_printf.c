/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:21:17 by akara             #+#    #+#             */
/*   Updated: 2022/08/30 13:21:46 by akara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "libft/libft.h"

static	int	flag(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += print_c(va_arg(args, int));
	else if (format == 's')
		len += print_s(va_arg(args, char *));
	else if (format == 'i' || format == 'd')
		len += print_i(va_arg(args, int));
	else if (format == 'p')
		len += print_p(va_arg(args, unsigned long long));
	else if (format == 'x' || format == 'X')
		len += print_hex(va_arg(args, unsigned int), format);
	else if (format == 'u')
		len += print_u(va_arg(args, unsigned int));
	else if (format == '%')
	{
		print_c('%');
		len++;
	}
	return (len);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
			len = len + flag(args, input[++i]);
		else
		{
			print_c(input[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
