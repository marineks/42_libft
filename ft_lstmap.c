/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:23:42 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/26 20:27:28 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Itère sur la liste lst et applique la fonction f au contenu de chaque élément. 
Crée une nouvelle listerésultant des applications successives de f. 
La fonction del est la pour detruire le contenu d un element si necessaire */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *cpy_list; // liste qui accueillera les applications succ. de f
    t_list *new;

    new = NULL;
    if (!lst || !f )
        return (NULL);
    while (lst) // itere dans lst (ici lst et pas lst->next car besoin de la derniere iteration pour la copie)
    {
        cpy_list = ft_lstnew((*f)(lst->content)); // cree nouvelle liste
		if (!cpy_list)
        {
            ft_lstclear(&new, del); // on del le contenu si necessaire de new du coup
            return (NULL);
        }
        ft_lstadd_back(&new, cpy_list); // on ajoute dans le meme ordre dans new
        lst = lst->next;
	}
	return (new);	
    }
