/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:35:28 by defraim           #+#    #+#             */
/*   Updated: 2019/05/29 16:37:10 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	charr(char c)
{
	write(1, &c, 1);
}

void		ft_putendl(char const *str)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			charr(str[i]);
			i++;
		}
		write(1, "\n", 1);
	}
}
