/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:23:54 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/02 11:48:53 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen((char *)s);
	if (c == '\0')
		return ((char *)s + i);
	while (s[--i] && i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
	}
	return (NULL);
}
