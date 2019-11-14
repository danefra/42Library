/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 20:22:48 by defraim           #+#    #+#             */
/*   Updated: 2019/05/29 16:27:49 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_digit_count(int i)
{
	int	x;
	int count;

	x = i;
	count = 0;
	if (i == 0)
		return (1);
	while (x != 0)
	{
		x /= 10;
		count++;
	}
	if (i < 0)
		return (count + 1);
	else
		return (count);
}
