/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:48:23 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/23 16:59:25 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    unsigned int count;
    if (!lst)
        return (0);
    count = 0;
    while (lst != NULL)            
        {
            lst = lst->next;
            count++;
        }
    return (count);
}

/* 
    Notes perso
    Ce qu'il fallait comprendre, c'est que chaque block finit par un élément
    pointant vers le bloc suivant, et que le tout se finit par un NULL.
    Donc on il suffit de passer d'un bloc à l'autre et d'incrémenter le
    compteur correspondant jusqu'à que ce que l'on atteigne la fin de la
    liste chainée. Le point tricky était la syntaxe de la l.26 .
*/
