/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:01:04 by agraton           #+#    #+#             */
/*   Updated: 2018/07/24 13:04:14 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int			get_next_line(const int fd, char **str);

int			main(int argc, char **argv)
{
	int		fd;
	int		fd2;
	char	**str;

	argc = 0;
	str = NULL;
	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	while (get_next_line(fd, str) == 0 && get_next_line(fd2, str) == 0);
	return (0);
}
