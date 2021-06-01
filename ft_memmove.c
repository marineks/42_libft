/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:34:15 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/01 10:56:44 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char * ptr_dst;
    unsigned char * ptr_src;
    size_t i;

    ptr_dst = (unsigned char *)dst;
    ptr_src = (unsigned char *)src;
    i = 0;
    if (dst <= src)
    {
        while (i < len)
        {
            ptr_dst[i] = ptr_src[i];
            i++;
        }
    }
    else if (dst > src)
    {
        while (len > 0)
        {
            ptr_dst[len] = ptr_src[len];
            len--;
        }
    }
    return (dst);
}

// version avec un cache ?