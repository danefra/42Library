/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:51:44 by defraim           #+#    #+#             */
/*   Updated: 2019/05/23 21:18:19 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int index;

	index = 0;
	if (s != '\0' && f != '\0')
		while (s[index] != 0)
		{
			f(index, &s[index]);
			index++;
		}
}
