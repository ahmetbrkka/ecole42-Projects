/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:08:31 by akara             #+#    #+#             */
/*   Updated: 2022/08/09 12:09:47 by akara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int tofind)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != (char)tofind)
		i++;
	if (str[i] == (char)tofind)
		return ((char *)(str + i));
	return (NULL);
}
