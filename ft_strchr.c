/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:55:34 by msanjuan          #+#    #+#             */
/*   Updated: 2021/05/27 18:29:31 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char *res;

	res = (char *)s;
	while (*res)
	{
		if (*res  == c)
		{
			return (res);			/* If we find the occurrence */
		}
		res++;
	}
	if (*res != c)
		return (NULL);			/* if we dont find any occurrence in s */
	return (res); 				/* if c == '\0' and we find it */
}
