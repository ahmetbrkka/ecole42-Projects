/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:05:08 by akara             #+#    #+#             */
/*   Updated: 2022/08/09 12:05:54 by akara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int fd);
void	ft_putnbr(int nb, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr(n, fd);
}

void	ft_putnbr(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar('-', fd);
		ft_putchar('2', fd);
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-', fd);
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48, fd);
		return ;
	}
	else
	{
		ft_putnbr(nb / 10, fd);
	}
	ft_putnbr(nb % 10, fd);
}

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}
