/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:44:36 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/22 10:26:25 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_ischarset_start(char const *s1, char const *set)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])	// Des qu on a trouvé une egalite, pas la peine de tester les autres c du set
				break;
			j++;
		}
		if (s1[i] != set[j])		// si apres avoir testé tout le set il reste une diff, on retourne le i (notre start)
				return (i);
		i++;
		j = 0;
	}
	return (i);
}

size_t ft_ischarset_end(char const *s1, char const *set)
{
	size_t i;						
	size_t j;

	i = ft_strlen(s1);				// on commence par la fin
	j = 0;
	while (i > 0)
	{
		while (set[j])
		{
			if (s1[i] == set[j])	// Des qu on a trouvé une egalite, pas la peine de tester les autres c du set
				break;
			j++;
		}
		if (s1[i] != set[j])		// si apres avoir testé tout le set il reste une diff, on retourne le i (notre end)
				return (i);
		
		j = 0;
		i--;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_s1;
	char	*tmp;
	size_t	start;
	size_t	end;
	size_t	i;

	
	if (!set || !s1) 
		return (NULL);
	start = ft_ischarset_start(s1, set);	// Regarder si charset au debut
	end = ft_ischarset_end(s1, set);		// Regarder si charset a la fin	
	if (ft_strlen(s1) == 0 || (start == ft_strlen(s1) && end == 0)) // cas spés bien chiants
	{
		tmp = (char *)malloc(sizeof(char) * 1);
		tmp[0] = 0;
		return (tmp);
	}
	trimmed_s1 = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!trimmed_s1)
		return (NULL);
	i = 0;						
	while (start <= end)					// Mnt, il faut recopier la nouvelle string avec les start et end trouves
		{
			trimmed_s1[i] = s1[start];
			start++;
			i++;
		}
	trimmed_s1[i] = '\0';
	return (trimmed_s1);
}