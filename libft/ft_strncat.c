/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 15:28:22 by agraton           #+#    #+#             */
/*   Updated: 2018/07/04 06:54:41 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char					*ft_strncat(char *s1, char *s2, size_t len)
{
	unsigned long		i;
	unsigned long		j;

	i = -1;
	while (s1[++i])
		;
	j = -1;
	while (s2[++j] && j < len)
		s1[i + j] = s2[j];
	s1[i + j] = '\0';
	return (s1);
}
