/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:27:34 by akara             #+#    #+#             */
/*   Updated: 2022/08/30 13:29:36 by akara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "libft/libft.h"

static	int	hex_len(unsigned int num);

int	print_hex(unsigned int number, char format)
{
	int		mod;
	int		len;
	char	*hex;
	int		i;

	len = hex_len(number);
	i = 0;
	mod = 0;
	hex = (char *)malloc(len + 1);
	while (i < len)
	{
		mod = number % 16;
		number = number / 16;
		if (mod >= 10)
			hex[len - i - 1] = mod % 10 + format - 23;
		else
			hex[len - i - 1] = mod + '0';
		i++;
	}
	hex[i] = '\0';
	print_s(hex);
	free(hex);
	return (len);
}

static	int	hex_len(unsigned int num)
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
