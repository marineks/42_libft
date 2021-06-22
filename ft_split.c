/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:58:10 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/22 13:28:30 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Compter le nombres de segmentations/nouvelles chaines de caractères
size_t      ft_new_string_count(char const *str, char set)
{
    size_t  i;
    size_t  count;
    char    is_not_set;
    char    next_is_set;
   
    i = 0;
    count = 0;
    while (str[i] == set)
        i++;
    while (str[i] != '\0')
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
static char        **ft_create_new_tab(char **new_tab, char const *str, char set)
{
    size_t i;
    size_t row;
    size_t column;
    size_t length;

    i = 0;
    row = 0;
    column = 0;
    length = 0;

    while (str[i])  // " Bonjour Marine "
    {
        if (str[i] != set) // Ex : 'B' != ' '
        {
            length = ft_letters_count(str, set, i); // Compte de 'B' à 'r'
            new_tab[row] = malloc(sizeof(char) * (length + 1)); // Len de "bonjour" = 7 + 1
            if (!new_tab[row])
                return (NULL);
            while (column < length) 
            {
                new_tab[row][column] = str[i];
                column++;
                i++;
            }
            new_tab[row][column] = '\0';
            row++;                          // On descend de ligne dans le tableau
            column = 0;
            --i;                            // i = i - 1 car sinon on avance trop (2x i++)
        }
        i++;                                // Le i reprend à l'espace après "Bonjour"
    }
    new_tab[row] = NULL;  
    return (new_tab);
}

char        **ft_split(char const *str, char set)
{
    size_t string_count;
    char **new_tab;

    if (!str)
        return (NULL);
    string_count = ft_new_string_count(str, set);
    if (string_count == 0 )           // When str = "   " && set = ' ' 
    {
        new_tab = (char **)malloc(sizeof(char *) * 1);
        new_tab[0] = NULL;
        return (&new_tab[0]);
    }
    new_tab = (char **)malloc(sizeof(char *) * (string_count + 1));
    if (!new_tab)
        return (NULL);
    ft_create_new_tab(new_tab, str, set);
    return (new_tab);
}