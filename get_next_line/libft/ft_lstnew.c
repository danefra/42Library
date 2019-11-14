/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:57:56 by defraim           #+#    #+#             */
/*   Updated: 2019/05/27 16:17:39 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*final;

	final = (t_list*)malloc(sizeof(t_list));
	if (final)
	{
		if (!content)
		{
			final->content = NULL;
			final->content_size = 0;
		}
		else
		{
			final->content = (void*)malloc(sizeof(size_t) * content_size);
			if (!final->content)
				return (NULL);
			final->content_size = content_size;
			ft_memcpy(final->content, content, content_size);
		}
		final->next = NULL;
		return (final);
	}
	return (NULL);
}
