/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:29:11 by akara             #+#    #+#             */
/*   Updated: 2022/08/09 12:30:36 by akara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int tofind)
{
	int	i;

	i = ft_strlen(str);
	while (i != 0 && str[i] != (char)tofind)
		i--;
	if (str[i] == (char)tofind)
		return ((char *)(str + i));
	return (NULL);
}
