/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:55:22 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/01 11:34:17 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Purpose : writes len bytes of value c to the string b. Returns its first argument.*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char		*res;

	res = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		res[i] = (unsigned char) c;
		i++;
	}	
	return (res);
}
