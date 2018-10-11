/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:01:04 by agraton           #+#    #+#             */
/*   Updated: 2018/10/11 21:35:33 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

size_t		ft_strlen(const char *s);

int			main(int argc, char **argv)
{
	int		fd;
	char	**str;

	argc = argv[1][1];
	str = (char **)malloc(sizeof(char *));
	if (!(*str = (char *)malloc(sizeof(char) * 20)))
		return (0);
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, str))
	{
		write(1, *str, ft_strlen(*str));
		write(1, "\n", 1);
	}
}
