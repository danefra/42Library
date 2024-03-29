/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:41:31 by defraim           #+#    #+#             */
/*   Updated: 2019/05/29 16:37:30 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	charr(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char const *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		charr(str[i]);
		i++;
	}
}
