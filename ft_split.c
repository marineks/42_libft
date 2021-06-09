/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:58:10 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/09 18:26:47 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
// Compter le nombres de segmentations/nouvelles chaines de caractères
size_t      ft_new_string_count(char const *str, char set)
{
    size_t  i;
    size_t  count;
    char    is_not_set;
    char    next_is_set;
    // printf("Je suis dans new string count");
    i = 0;
    count = 0;
    while (str[i] == set)
        i++;
    while (str[i])
    {
        is_not_set = str[i] != set;
        next_is_set = str[i + 1] == set || str[i + 1] == '\0';
        if (is_not_set && next_is_set)
            count++;   
        i++;
    }
    return (count);
}

// Compter le nombre de caractères (col) d'une ligne row pour la malloc
size_t      ft_letters_count(char const *str, char set, size_t i)
{
    size_t count;

    count = 0;
    while (str[i] && str[i] != set)
    {
        count++;
        i++;
    }    
    return (count);
}

// Decomposer et copier dans new_tab les nouvelles chaines de caractères
// static char        **ft_create_new_tab(char **new_tab, char const *str, char set)
// {
//     size_t i;
//     size_t row;
//     size_t column;
//     size_t length;

//     i = 0;
//     row = 0;
//     column = 0;
//     length = 0;
//     while (str[i])  // " Bonjour Marine "
//     {
//         if (str[i] != set) // Ex : 'B' != ' '
//         {
//             // printf("Je suis dans la condition");
//             length = ft_letters_count(str, set, i); // Compte de 'B' à 'r'
//             new_tab[row] = malloc(sizeof(char) * (length + 1)); // Len de "bonjour" = 7 + 1
//             while (column < length) 
//             {
//                 // printf("Je copie");
//                 new_tab[row][column] = str[i];
//                 // printf("%c", new_tab[row][column]);
//                 column++;
//                 i++;
//             }
//             new_tab[row][column] = '\0';
//             row++;                          // On descend de ligne dans le tableau
//             column = 0;
//             --i;
//         }
//         i++;                                // Le i reprend à l'espace après "Bonjour"
//     }
//     new_tab[row] = NULL;   
//     // printf("Je vais retourner");         // cf. "Le tableau doit être terminé par NULL."
//     return (new_tab);
// }

// char        **ft_split(char const *str, char set)
// {
//     size_t string_count;
//     char **new_tab;
//     // printf("Je suis dans la fonction principale");
//     string_count = ft_new_string_count(str, set);
//     new_tab = (char **)malloc(sizeof(char *) * (string_count + 1));
//     if (!new_tab)
//         return (NULL);
//     // printf("J'ai malloqué'");
//     if (string_count == 0)           // When str = "   " && set = ' ' 
//         return (new_tab = NULL);
//     // printf("Je vais dans create");
//     ft_create_new_tab(new_tab, str, set);
//     return (new_tab);
// }

int main(void)
{
    printf("Letters count : %zu\n", ft_letters_count(" Bonjour Marine", ' ', 1));
    // ft_split("  Bonjour Marine ", ' ');
    return (0);
}