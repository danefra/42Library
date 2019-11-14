/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:52:34 by defraim           #+#    #+#             */
/*   Updated: 2019/05/27 16:26:43 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p;
	unsigned char *s;

	p = (unsigned char *)s1;
	s = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*p == *s && n-- > 0)
	{
		p++;
		s++;
		if (n == 0)
			return (0);
	}
	if (*p != *s)
		return (*p - *s);
	return (0);
}
