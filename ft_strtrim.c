/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:44:36 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/02 17:37:36 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ischarset_sta

char *ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_s1;
	size_t	i;
	size_t	j;

	trimmed_s1 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (s1 == '\0')
		return (NULL);
	if (!trimmed_s1)
		return (NULL);
	i = 0;
	// Regarder si charset au debut
	ft_ischarset_start(s1, set);
	// Regarder si charset a la fin
	ft_ischarset_end(s1, set);
	// Mnt, il faut recopier la nouvelle string avec les start et end trouves
	j = 0;
	while (start < end)
	{
		trimmed_s1[j] = set[start];
		start++;
	}
	trimmed_s1[j] = '\0';
	return (trimmed_s1);
}
