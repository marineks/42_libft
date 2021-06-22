/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:07:40 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/22 11:21:43 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int long    ft_howmanydigits(int long number)    // Purpose: find the correct length for allocating memory for str
{
    int long i;
    i = 0;
    if (number <= 0)                            // If n is negative, i is incremented to "pass" the '-' sign
        i++;
    while (number)                              //  Decomposing n. The number of loops is the digit number
    {
        number = number / 10;
        i++; 
    }
    return (i);                         // ex : 7895 needs 4 loops. Then they are 4 digits (7, 8, 9, 5)
}

// char    *ft_reverse_str(char *str)      // Purpose : reverse the result from the conversion in good order
// {
//     char            *copy;
//     unsigned int    i;
//     unsigned int    len;
    
//     copy = ft_strdup(str);
//     i = 0;
//     len = ft_strlen((const char*)str) - 1;
//     while (len > 0)
//     {
//         copy[i] = str[len];
//         i++;
//         len--;
//     }
//     copy[i] = str[len];                 // makeshift roundaway to a seg fault. must be fixed later
//     copy[i + 1] = '\0';
//     return (copy);
// }

char    *ft_itoa(int n)
{
    char               *converted_string;
    int long    i;
    int long    length;
    int long    nb;

    /* INITIALISATION, ALLOCATING MEMORY */
    nb = (int long)n;
    length = ft_howmanydigits(nb);
    converted_string = (char *)malloc(sizeof(char) * (length + 1));
    if (!converted_string)
        return (NULL);
        i = 0;
    converted_string[length] = '\0';
    /* SPECIAL CASE : negative number */
    if (nb < 0)
    {
        nb = -nb;
        converted_string[i] = '-';
        i++;
    }
    /* CONVERSION FROM INT TO CHAR */
    while (i < length)
    {
        converted_string[--length] = (nb % 10) + 48;
        nb = nb / 10; 
    }
    return (converted_string);
}