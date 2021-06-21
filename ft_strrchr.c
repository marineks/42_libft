/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:23:54 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/21 15:03:56 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen((char *)s);
	if ((char)c == '\0')
		return ((char *)s + i);
	while (s[--i] && i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
	}
	return (NULL);
}
