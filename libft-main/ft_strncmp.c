/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:18:34 by akara             #+#    #+#             */
/*   Updated: 2022/08/10 15:11:13 by akara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		dif;

	i = 0;
	if (n == 0)
	{
		dif = 0;
		return (dif);
	}
	while ((s1[i] != '\0' && s2[i] != '\0')
		&& (s1[i] == s2[i]) && (i < n - 1))
		i++;
	dif = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (dif);
}
