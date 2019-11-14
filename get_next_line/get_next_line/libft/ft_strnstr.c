/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:06:36 by defraim           #+#    #+#             */
/*   Updated: 2019/05/27 16:37:41 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*need == 0)
		return ((char*)hay);
	else
		while (hay[i] != 0 && len > i)
		{
			while (hay[i + j] == need[j] && need[j] != 0 && j + i < len)
				j++;
			if (j == ft_strlen(need))
				return ((char*)&hay[i]);
			i++;
		}
	return (0);
}
