/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_i.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:29:49 by akara             #+#    #+#             */
/*   Updated: 2022/08/30 13:30:15 by akara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "libft/libft.h"

int	print_i(int number)
{
	char	*num;
	int		len;


	num = ft_itoa(number);
	len = print_s(num);
	free(num);
	return (len);
}
