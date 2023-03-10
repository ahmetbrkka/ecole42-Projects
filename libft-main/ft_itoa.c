/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:07:04 by akara             #+#    #+#             */
/*   Updated: 2022/08/30 13:47:18 by akara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*rev(char *number, int i, int trigger, int n);
static	int	intlen(unsigned int nbr);

char	*ft_itoa(int n)
{
	char			*number;
	int				i;
	int				trigger;
	unsigned int	nbr;

	trigger = 0;
	i = 0;
	if (n < 0)
	{
		trigger = 1;
		nbr = n * -1;
	}
	else
		nbr = n;
	number = (char *)malloc(intlen(nbr) * sizeof(char) + 1);
	if (nbr == 0)
		number[i++] = '0';
	while (nbr >= 1)
	{
		number[i++] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	number[i] = '\0';
	return (rev(number, i, trigger, n));
}

static	char	*rev(char *number, int i, int trigger, int n)
{
	int		j;
	char	*rev;

	n = 1;
	if (trigger == 1)
		n = 2;
	rev = (char *)malloc((i + n) * sizeof(char));
	if (!(rev))
		return (0);
	j = 0;
	if (trigger == 1)
	{
		rev[i + 1] = '\0';
		while (i > 0)
			rev[i--] = number[j++];
		rev[0] = '-';
	}
	else
	{
		rev[i--] = '\0';
		while (i >= 0)
			rev[i--] = number[j++];
	}
	free(number);
	return (rev);
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
