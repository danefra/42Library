/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 20:37:55 by defraim           #+#    #+#             */
/*   Updated: 2019/05/23 20:39:50 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *dest;
	char *fresh;

	dest = malloc(size);
	fresh = dest;
	if (dest)
	{
		while (size > 0)
		{
			*fresh++ = 0;
			size--;
		}
		return (dest);
	}
	return (0);
}
