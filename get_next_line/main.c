/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanette <aanette@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:16:34 by aanette           #+#    #+#             */
/*   Updated: 2020/12/24 20:46:08 by aanette          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int main(void)
{
	int fd;
	char *line;

	fd = open("text.txt", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("gnl = %s\n\n\n", line);
		free(line);
	}
	printf("gnl = %s\n\n\n", line);
	free(line);
	return(0);
}
