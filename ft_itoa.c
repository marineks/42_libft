/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:07:40 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/04 15:28:57 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_howmanydigits(int long long number)    // Purpose: find the correct length for allocating memory for str
{
    int i;
    i = 0;
    if (number < 0)                     // If n is negative, i is incremented to "pass" the '-' sign
        i++;
    while (number % 10 != 0)            //  Decomposing n. The number of loops is the digit number
    {
        number = number / 10;
        i++; 
    }
    return (i);                         // ex : 7895 needs 4 loops. Then they are 4 digits (7, 8, 9, 5)
}

char    *ft_reverse_str(char *str)      // Purpose : reverse the result from the conversion in good order
{
    char            *copy;
    unsigned int    i;
    unsigned int    len;
    
    copy = ft_strdup(str);
    i = 0;
    len = ft_strlen((const char*)str) - 1;
    while (len > 0)
    {
        copy[i] = str[len];
        i++;
        len--;
    }
    copy[i] = str[len];                 // makeshift roundaway to a seg fault. must be fixed later
    copy[i + 1] = '\0';
    return (copy);
}

char    *ft_itoa(int n)
{
    char               *converted_string;
    int long long    cache;
    int long long    length;
    int long long    i;

    /* INITIALISATION, ALLOCATING MEMORY */
    length = ft_howmanydigits((int long long)n);
    converted_string = (char *)malloc(sizeof(char) * (length + 2));
    if (!converted_string)
        return (NULL);
    i = 0;
    cache = n;
    /* SPECIAL CASES */
    if (n == -2147483648)
        return (converted_string = "-2147483648");
    if (n == -0)
        return (converted_string = "0");
    if (n < 0)
    {
        n = -n;
        length--;
    }
    /* CONVERSION FROM INT TO CHAR */
    while (i < length)
    {
            converted_string[i] = (n % 10) + 48;
            n = n / 10; 
        i++;
    }
    if (cache < 0)
    {
        converted_string[i] = '-';
        converted_string[i + 1] = '\0';
    }
    else
        converted_string[i] = '\0';
    return (ft_reverse_str(converted_string));
}