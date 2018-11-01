/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 12:21:44 by agraton           #+#    #+#             */
/*   Updated: 2018/06/26 17:01:10 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char		*ft_strsub(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s1;

	if (!s)
		return (NULL);
	i = 0;
	if (!(s1 = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (!s1)
		return (0);
	while (i <= start)
		if (!s[i++])
			return (0);
	i = 0;
	while (i < len && s[i + start])
	{
		s1[i] = s[i + start];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
