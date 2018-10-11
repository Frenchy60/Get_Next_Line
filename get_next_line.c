/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:01:48 by agraton           #+#    #+#             */
/*   Updated: 2018/10/11 22:04:38 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
 * Files
 * ->content_size = fd
 * ->content = char *str;
 * ->next = *next(files)
*/

size_t				ft_strcpyu(char **dest, char *origin, char letter)
{
	size_t			length;
	size_t			i;

	length = 0;
	while (origin[length] != letter && origin[length] != '\0')
		length++;
	*dest = (char *)malloc(sizeof(char) * (length + 1));
	i = -1;
	while (++i < length)
	{
		dest[0][i] = origin[i];
	}
	dest[0][i + 1] = '\0';
	return (length);
}

t_list				*get_current_file(t_list **file, size_t fd)
{
	t_list			*tmp;

	tmp = *file;
	while (tmp)
	{
		if (tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0", sizeof(char *));
	ft_lstadd(file, tmp);
	(*file)->content_size = fd;
	return (tmp);
}

int					get_next_line(const int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	static	t_list	*files = NULL;
	t_list			*current;
	int				readn;
	size_t			i;

	if (line == NULL || fd < 0)
		return (-1);
	current = get_current_file(&files, fd);
	while (!ft_strchr(current->content, '\n') &&
			(readn = read(fd, buff, BUFF_SIZE)))
	{
		buff[readn] = '\0';
		current->content = ft_strjoin(current->content, buff);
	}
	if (readn < BUFF_SIZE && !ft_strlen(current->content))
		return (0);
	i = ft_strcpyu(line, current->content, '\n');
	if (i < ft_strlen(current->content))
		current->content += i + 1;
	else
		ft_strclr(current->content);
	return (1);
}
