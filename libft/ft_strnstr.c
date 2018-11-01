/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 10:10:03 by agraton           #+#    #+#             */
/*   Updated: 2018/07/04 07:11:29 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		k;
	int			found;

	i = -1;
	found = 1;
	if (!ft_strlen(s2))
		return ((char *)s1);
	while (*(s1 + ++i) && i < len)
	{
		j = 0;
		if (*(s1 + i) == *(s2 + 0))
		{
			k = i;
			found = 1;
			while (*(s1 + k) && *(s2 + j) && j < len && k < len)
				if (*(s1 + k++) != *(s2 + j++))
					found = 0;
			if (found && !*(s2 + j))
				return ((char *)s1 + i);
		}
	}
	return (NULL);
}
