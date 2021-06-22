/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:41:20 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/22 15:11:48 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* A/ SOIT les chaines sont egales et on retourne 0; 
 * B/ SOIT s1 est plus petite que s2 et on retourne <0 
 * C/ SOIT s1 est plus grande que s2 et on retourne >0
 * ATTENTION : prendre en compte les cas ou n est plus grand que s1 ou s2*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	unsigned char *str1;
	unsigned char *str2;
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;

	if (n == 0 || (str1[i] == '\0' && n == 0) || (str2[i] == '\0' && n == 0))
		return (0);
	while (str1[i] && str2[i] && i < n - 1)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i]- str2[i]);
}
