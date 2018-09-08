/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:01:04 by agraton           #+#    #+#             */
/*   Updated: 2018/09/08 18:21:18 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

int			main(int argc, char **argv)
{
	int		fd;
	char	*str;

	argc = argv[1][1];
	if (!(str = (char *)malloc(sizeof(char) * 20)))
		return (0);
	fd = open(argv[1], O_RDONLY);
	read(fd, str, 20);
	int i;
	i = -1;
	while (++i < 20)
	{
		if (str[i] == '\0')
			write(1, ".\\0.", 4);
		else
			write(1, &str[i], 1);
	}
	return (0);
}
