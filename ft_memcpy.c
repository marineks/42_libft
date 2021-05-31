/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:01:06 by msanjuan          #+#    #+#             */
/*   Updated: 2021/05/31 15:22:07 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memcpy() function copies n bytes from memory area src to memory area dst.  If dst
// and src overlap, behavior is undefined.  

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *ptr_dest;
    unsigned char *ptr_source;
    size_t i;

    i = 0;
    ptr_dest = (unsigned char *)dst;
    ptr_source = (unsigned char *)src;

    while (i < n)
    {
        ptr_dest[i] = ptr_source[i];
        i++;
    }
    return (dst);
}