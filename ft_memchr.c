/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:48:09 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/21 16:11:06 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memchr() function locates the first occurrence of c 
// (converted to an unsigned char) in string s.
// Returns a pointer to the byte located, or NULL if no such byte
// exists within n bytes.

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *string;
    unsigned char occurence;
	size_t i = 0;
	string = (unsigned char *)s;
    occurence = (unsigned char)c;
 
	if (occurence == 0 && n == 0)
		return (NULL);
	while (i < n - 1)
	{
		if (string[i] == occurence)
			return (string + i);			
		i++;
	}
	if (string[i] == occurence)    /* if c == '\0' and we find it */
        return (string + i);
    return (NULL);			            /* if we dont find any occurrence in s */		
}

// DIFFERENCE STRCHR & MEMCHR
// strchr expects that the first parameter is null-terminated, 
// and hence doesn't require a length parameter.
// memchr works similarly but doesn't expect that the memory block is null-terminated, 
// so you may be searching for a \0 character successfully.
