/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:23:42 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/26 17:53:09 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
//     t_list *lst_after_iteration;
//     t_list *lst_after_creation;

//     if (!lst || !f || !del)
//         return (NULL);
//     // Itère sur la liste lst et applique la fonction f aucontenu de chaque élément
//     lst_after_iteration = ft_lstiter(lst, (*f)(lst));

//     // Crée une nouvelle liste résultant des applications successives de f
//     ft_lstnew(lst_after_iteration);

//         while (lst)
//         {
//             lst_after_iteration = (*f)(lst->content);
//             lst_after_creation = ft_lstnew(lst_after_iteration);
//             lafonction del est la pour detruire le contenu d unelement si necessaire
//             if (!lst_after_creation)
//                 (*del) //  AFINIR
//             lst = lst->next;
//         }
//         (*f)(lst->content);

// }