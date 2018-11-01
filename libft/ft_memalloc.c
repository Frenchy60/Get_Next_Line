/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:37:57 by agraton           #+#    #+#             */
/*   Updated: 2018/06/26 16:02:47 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void			*ft_memalloc(size_t size)
{
	char		*mem;

	mem = (void *)malloc(sizeof(char) * size);
	if (!mem)
		return (0);
	while (size-- > 0)
		mem[size] = 0;
	return (mem);
}
