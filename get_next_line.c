/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:01:48 by agraton           #+#    #+#             */
/*   Updated: 2018/09/08 18:20:54 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					get_next_line(const int fd, char **line)
{
	static	char	*buffer = NULL;

	if (!buffer && !(buffer = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (-1);
	if (0 > read(fd, buffer, BUFF_SIZE))
		return (-1);
}
