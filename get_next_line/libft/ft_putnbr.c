/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:40:05 by defraim           #+#    #+#             */
/*   Updated: 2019/05/23 15:47:14 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
		{
			ft_putchar('2');
			ft_putnbr(147483648);
			return ;
		}
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + 48);
}
