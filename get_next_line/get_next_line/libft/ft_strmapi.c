/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:33:08 by defraim           #+#    #+#             */
/*   Updated: 2019/05/27 16:29:17 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*out;
	unsigned int	i;

	i = 0;
	if (f && s)
	{
		out = ft_strnew(ft_strlen(s));
		if (!out)
			return (NULL);
		while (s[i] != 0)
		{
			out[i] = f(i, s[i]);
			i++;
		}
		return (out);
	}
	return (NULL);
}
