/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:57:49 by defraim           #+#    #+#             */
/*   Updated: 2019/05/23 21:18:40 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *m;
	char *o;

	if (f && s)
	{
		o = ft_strnew(ft_strlen(s));
		if (!o)
			return (NULL);
		m = o;
		while (*s != 0)
		{
			*m++ = f(*s++);
		}
		return (o);
	}
	return (NULL);
}
