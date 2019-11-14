/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 21:48:35 by defraim           #+#    #+#             */
/*   Updated: 2019/08/24 17:43:27 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*reeed(const int fd, char *buff, int *n)
{
	char	tmp[BUFF_SIZE + 1];
	char	*tmp1;

	*n = read(fd, tmp, BUFF_SIZE);
	tmp[*n] = '\0';
	tmp1 = buff;
	if (!(buff = ft_strjoin(buff, tmp)))
			return (NULL);
	ft_strdel(&tmp1);
	return(buff);
}

int			oneline(char **line, char **buff)
{
	if (!(*line = ft_strdup(*buff)))
		return (-1);
	ft_bzero(*buff, ft_strlen(*buff));
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char		*buff = "";
	int							n;
	char			*str;

	if(!(line) || fd < 0 || (buff[0] == '\0' && !(buff = ft_strnew(0))))
		return (-1);
	n = 1;
	while(n > 0)
	{
		if((str = ft_strchr(buff, '\n')) != NULL)
		{
			*str = '\0';
			if (!(*line = ft_strdup(buff)))
				return (-1);
			ft_memmove(buff, str + 1, ft_strlen(str + 1) + 1);
			return (1);
		}
		if(!(buff = reeed(fd, buff, &n)))
			return (-1);
	}
	ft_strdel(&str);
	if (n == 0 && ft_strlen(buff))
		n  = oneline(&(*line), &buff);
	return (n);
}
