/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:07:40 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/04 15:09:02 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int     ft_howmanydigits(int number)
{
    int i;
    i = 0;
    if (number < 0)
        i++;
    while (number % 10 != 0)
    {
        number = number / 10;
        i++; 
    }
    return (i);
}

char    *ft_reverse_str(char *str)
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
    copy[i] = str[len];
    copy[i + 1] = '\0';
    return (copy);
}

char    *ft_itoa(int n)
{
    char    *converted_string;
    int     cache;
    int     length;
    int     i;

    length = ft_howmanydigits(n);
    converted_string = (char *)malloc(sizeof(char) * (length + 2));
    if (!converted_string)
        return (NULL);
    i = 0;
    cache = n;
    if (n == -2147483648)
        return (converted_string = "-2147483648");
    if (n == -0)
        return (converted_string = "0");
    if (n < 0)
    {
        n = -n;
        length--;
    }
    while (i < length)
    {
            // printf("     n: %d\n", n);
            converted_string[i] = (n % 10) + 48;
            n = n / 10; 
            // printf("     converted_str[i] : %c\n", converted_string[i]);
        i++;
    }
    if (cache < 0)
    {
        // printf("     Iteration : %d\n", i);
        converted_string[i] = '-';
        converted_string[i + 1] = '\0';
    }
    else
        converted_string[i] = '\0';
    return (ft_reverse_str(converted_string));
}

/* prendre l'int (ex : 1234) et le transformer en "1234"
    steps :
    1/ decomposer l'int en 1, 2, 3 et 4
    2/ allouer une chaine de caracteres de la taille du nb d'int decomposes (ici 4 + '\0' donc 5)
    3/ boucler et attribuer a chaque elt de l'array un 1, 2, 3, 4 converti en char
    4 / retourner la chaine de caracteres
*/