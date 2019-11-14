/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 18:04:23 by defraim           #+#    #+#             */
/*   Updated: 2019/05/23 20:50:28 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *x;

	while (n > 0)
	{
		x = (unsigned char *)s;
		if (*x == (unsigned char)c)
			return (x);
		s++;
		n--;
	}
	return (0);
}
