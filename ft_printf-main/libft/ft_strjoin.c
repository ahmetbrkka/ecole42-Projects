/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:11:52 by akara             #+#    #+#             */
/*   Updated: 2022/08/09 12:13:55 by akara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		i;
	size_t	count;

	i = 0;
	count = 0;
	joined = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (joined == NULL)
		return (0);
	while (count < ft_strlen(s1))
	{
		joined[i] = s1[count];
		i++;
		count++;
	}
	count = 0;
	while (count < ft_strlen(s2))
	{
		joined[i] = s2[count];
		i++;
		count++;
	}
	joined[i] = '\0';
	return (joined);
}
