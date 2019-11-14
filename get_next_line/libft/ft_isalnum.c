/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 15:52:04 by defraim           #+#    #+#             */
/*   Updated: 2019/05/29 16:37:58 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

static int		alpha(int c)
{
	if ((c < 'A' || c > 'Z') &&
		(c < 'a' || c > 'z'))
		return (0);
	return (1);
}

int				ft_isalnum(int c)
{
	if (count(c) || alpha(c))
		return (1);
	return (0);
}
