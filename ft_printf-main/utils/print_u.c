/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:32:27 by akara             #+#    #+#             */
/*   Updated: 2022/08/30 13:32:28 by akara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "libft/libft.h"

static	int	intlen(unsigned int nbr);

int	print_u(unsigned int n)
{
	char	*number;
	int		i;
	int		len;

	i = 0;
	len = intlen(n);
	number = (char *)malloc(intlen(n) * sizeof(char));
	if (n == 0)
		number[i++] = '0';
	while (n >= 1)
	{
		number[i++] = n % 10 + '0';
		n = n / 10;
	}
	i--;
	while (i >= 0)
		print_c(number[i--]);
	free(number);
	return (len);
}

static	int	intlen(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
	{
		i = 1;
		return (i);
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
