/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:55:22 by msanjuan          #+#    #+#             */
/*   Updated: 2021/05/28 12:29:10 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Purpose : writes len bytes of value c to the string b. Returns its first argument.*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char		*res;

	res = (unsigned char *) b;
	i = 1;
	while (i <= len)
	{
		res[i] = (unsigned char) c;
		i++;
	}	
	return (res);
}
