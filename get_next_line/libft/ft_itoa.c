/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 20:33:03 by defraim           #+#    #+#             */
/*   Updated: 2019/05/29 16:27:12 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(int i)
{
	int x;
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

char		*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_digit_count(n);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[len-- - 1] = '8';
			n = n / 10;
		}
		n = -n;
	}
	while (n != 0 && len >= 0)
	{
		str[len-- - 1] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}
