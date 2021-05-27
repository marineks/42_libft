/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:01:30 by msanjuan          #+#    #+#             */
/*   Updated: 2021/05/27 16:36:29 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i= 0;	
	j = 0;
	while (dst[i] && i <= dstsize)					/* "Copying" dst until dstsize by incrementing i */
		i++;
	if (dstsize == 0 || i >= dstsize)
		return (dstsize + ft_strlen(src));
	while (src[j] && (i + j) < dstsize - 1)				/* Appending to dst the src string */
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (ft_strlen(src) + i);					/* doit retourner la longueur de src + i!!! */
}
