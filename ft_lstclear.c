/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:21:23 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/23 17:03:29 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Supprime tous les elts de la liste à partir d'un elt **list donné.
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *current_node;
    t_list *next_node;
   
    if (!lst || !del)
        return ;
    current_node = *lst;                   
    /* Itere dans la liste chainée et supprimer à chq fois l'elt visé */
    while (current_node != NULL)
    {
        next_node = current_node->next;           // on stock la valeur de current qui va etre del
        if (del)
            (*del)(current_node->content);
        free(current_node);
        current_node = next_node;        // .. on passe à l'elt suivant
    }   
    /* Le pointeur initial doit être mis à NULL */
    *lst = NULL;
}