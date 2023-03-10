/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:30:36 by akara             #+#    #+#             */
/*   Updated: 2022/08/30 13:31:45 by akara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "libft/libft.h"

static	int	print_hex_ptr(uintptr_t number, int len);
static	int	hex_len(uintptr_t num);

int	print_p(unsigned long long ptr)
{
	int	len;

	len = hex_len(ptr);
	print_s("0x");
	return (print_hex_ptr(ptr, len) + 2);
}

static	int	print_hex_ptr(uintptr_t number, int len)
{
	int		mod;
	char	*hex;
	int		i;

	i = 0;
	mod = 0;
	hex = (char *)malloc(len + 1);
	while (i < len)
	{
		mod = number % 16;
		number = number / 16;
		if (mod >= 10)
			hex[len - i - 1] = mod % 10 + 'a';
		else
			hex[len - i - 1] = mod + '0';
		i++;
	}
	hex[i] = '\0';
	print_s(hex);
	free(hex);
	return (len);
}

static	int	hex_len(uintptr_t num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num = num / 16;
		i++;
	}
	return (i);
}
