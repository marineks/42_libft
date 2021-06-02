/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:55:03 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/02 16:03:23 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new_string;
	size_t i;
	size_t index;

	new_string = (char *)malloc(len + 1 * sizeof(char));
	if (!new_string)
		return NULL;
	i = (size_t)start;
	index = 0;
	if (s == '\0')
		return NULL;
	if (start < len)
	{
		while (index < len)
		{
			new_string[index] = s[i];
			i++;
			index++;
		}
	}
	new_string[index] = '\0';
	return (new_string);
}
