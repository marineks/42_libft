/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:48:09 by msanjuan          #+#    #+#             */
/*   Updated: 2021/05/31 11:09:37 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memchr() function locates the first occurrence of c 
// (converted to an unsigned char) in string s.
// Returns a pointer to the byte located, or NULL if no such byte
// exists within n bytes.

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    char *string;
    size_t i;
    unsigned char occurence;

	string = (char *)s;
    occurence = (unsigned char)c;
    i = 0;
	while (i < n)
	{
		if (*string == occurence)
		{
			return (string);			
		}
		string++;
	}
	if (*string == '\0' && *string == c)    /* if c == '\0' and we find it */
        return (string);
    else return (NULL);			            /* if we dont find any occurrence in s */		
}

// DIFFERENCE STRCHR & MEMCHR
// strchr expects that the first parameter is null-terminated, 
// and hence doesn't require a length parameter.
// memchr works similarly but doesn't expect that the memory block is null-terminated, 
// so you may be searching for a \0 character successfully.