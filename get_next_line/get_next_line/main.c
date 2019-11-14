/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defraim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 17:29:18 by defraim           #+#    #+#             */
/*   Updated: 2019/08/06 21:05:06 by defraim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include"get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd;
	int ret;
	char *one_line;

	fd = open("test.txt", O_RDONLY);/*
	while((ret = get_next_line(fd, &one_line)))
	{
		if (ret > 0)
		{
			printf("return:|%d|", ret);
			printf("|%s|\n", one_line);
			free(one_line);
		}
		if (ret == -1)
		{
			printf("File does not exist");
			break;
		}
	}
	*/
	while ((ret = get_next_line(fd, &one_line) > 0))
		printf("%s\n", one_line);
	return (0);
}
