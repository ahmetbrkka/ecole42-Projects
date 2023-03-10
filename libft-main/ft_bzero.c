/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:58:57 by akara             #+#    #+#             */
/*   Updated: 2022/08/08 17:00:52 by akara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t count)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < count)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}