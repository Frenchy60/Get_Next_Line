/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:01:48 by agraton           #+#    #+#             */
/*   Updated: 2018/07/24 12:58:52 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int			get_next_line(const int fd, char **line)
{
	char	c;

	line = NULL;
	if (read(fd, &c, 1))
		write(1, &c, 1);
	else
		return (1);
	return (0);
}
