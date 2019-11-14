/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:53:13 by defraim           #+#    #+#             */
/*   Updated: 2019/05/23 21:06:53 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *p;
	unsigned char *s;

	s = (unsigned char*)src;
	p = (unsigned char*)dst;
	while (n > 0)
	{
		*p = *s;
		if (*s == (unsigned char)c)
			return ((void*)p + 1);
		p++;
		s++;
		n--;
	}
	return (NULL);
}
