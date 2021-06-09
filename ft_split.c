/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:58:10 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/09 15:00:46 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
// Compter le nombres de segmentations/nouvelles chaines de caractères
size_t  ft_new_string_count(char const *str, char set)
{
    size_t i;
    size_t count;
    char is_set;
    char next_not_set;

    i = 0;
    count = 0;
    printf("      String : |%s| ~ Separateur : '%c'\n", str, set);
    while (str[i] == set)
        i++;
    while (str[i])
    {
        is_set = str[i] != set;
        next_not_set = (str[i + 1] == set || str[i + 1] == '\0');
        // printf("        Current character : |%c| ~ Next character : |%c|\n", 
        // is_set, next_not_set);
        if (is_set && next_not_set)
    {
        count++;
        printf("      Index : |%zu| ~ Current character : |%c| ~ Next character : |%c|\n", i, str[i], str[i + 1]);
    }
            
        i++;
    }
    return (count);
}

/* exemple 1 : 
        str[] = "Bonjour je m'appelle Marine";
        set = ' ';
        Il y a 3 espaces et 4 chaines de caract. = "Bonjour\0", "je\0", 
                                                    "m'appelle\0", "Marine\0" 

        exemple 2 : 
        str[] = "Bonjour Marine";
        set = ' ';
        Il y a 1 espaces et 2 chaines de caract. = "Bonjour\0", "Marine\0"

        exemple 3 : 
        str[] = " ";
        set = ' ';
        Il y a 1 espace et 0 chaines de caract.

        exemple 4 : 
        str[] = "Bonjour";
        set = ' ';
        Il y a 0 espaces et 1 chaines de caract. = "Bonjour\0"

        Idees :
        - Prendre un compteur pour le nombre de set et de nouvelles strings?
        - Au lieu d'avoir deux compteurs, garder le count des set et faire une 
            condition (si strlen(str) - count == 0)
            c'est qu'il n'y a pas de chaines de caract à split
            Idem, si count == 0, ca veut dire qu'on rend la string telle qu'elle
     */
// char **ft_split(char const *str, char set)
// {
//     size_t length;
//     size_t word_count;
//     char **new_tab;

//     word_count = ft_new_string_count(str, set);
//     length = ft_count_total_len(str, set);
//     new_tab = (char **)malloc(sizeof(char) * (length + 1))

//     if (!new_tab)
//         return (NULL);
//     else if (word_count == 0 || ft_strlen(str) - word_count == 0)
//     {
//         return (new_tab[0] = str);
//     }   
//     else
//     {
//         // Coder l' "attribution" des nouvelles string dans new_matrix
//     }
//     return (new_tab);
// }

