/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:14:14 by defraim           #+#    #+#             */
/*   Updated: 2019/05/23 15:46:13 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hay, const char *need)
{
	size_t i;
	size_t j;

	i = 0;
	if (*need == 0)
		return ((char*)hay);
	while (hay[i] != 0)
	{
		j = 0;
		while (hay[i + j] == need[j] && need[j] && hay[i + j] != 0)
			j++;
		if (j == ft_strlen(need))
			return ((char*)&hay[i]);
		i++;
	}
	return (0);
}
