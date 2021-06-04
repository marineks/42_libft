/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:58:10 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/04 18:17:39 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *string, char splitting_character)
{
    char    **new_matrix;
    size_t  row_index;                  // test pour un meilleur naming que i
    size_t  column_index;               // sensé remplacer j
    size_t  str_index;                  // pour looper dans la string de base
    size_t  tmp_index;

    /* INITIALISATION, ALLOCATION OF MEMORY */
    str_index = 0;
    row_index = 0;
    column_index = 0;
    tmp_index = 0;                                  
    new_matrix = (char **)malloc(sizeof(char) * (ft_strlen(string) + 1));
    if (!new_matrix || !string)
        return (NULL);

    /* LOOPING THROUGH THE STRING TO FIND THE OCCURENCES */
    while (string[str_index])
    {
        if (string[str_index] == splitting_character)
        {
            /* IF SO, FILL THE MATRIX WITH THE NEWLY SPLIT STRINGS */
            while (column_index < str_index)
            {
                new_matrix[row_index][tmp_index] = string[column_index];
                column_index++;
                tmp_index++;
            }
            ft_putstr_fd("Test d'un row:", 1);
            ft_putendl_fd(new_matrix[row_index], 1);
            row_index++;
            column_index = str_index + 1;
        }
        str_index++;
        tmp_index = 0;
    }
    /* RESOUDRE LE PROBLEME DE LA DERNIERE PARTIE DE LA STRING (from c to '\0')*/
    while (column_index < ft_strlen(string))
    {
        new_matrix[row_index][tmp_index] = string[column_index];
        column_index++;
        tmp_index++;
    }
    return (new_matrix);
}

// pbs à régler : ne marche pas avec un seul mot, ne marche pas tout le tps
// avec le test des putstr putendl etc, seg fault direct, a creuser