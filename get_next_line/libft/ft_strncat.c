/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:00:51 by defraim           #+#    #+#             */
/*   Updated: 2019/05/24 13:43:20 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[x] != '\0' && n > 0)
	{
		s1[i] = s2[x];
		i++;
		x++;
		--n;
	}
	s1[i] = '\0';
	return (s1);
}