/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:58:10 by msanjuan          #+#    #+#             */
/*   Updated: 2021/06/25 17:44:57 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_new_string_count(char const *str, char set)
{
	size_t	i;
	size_t	count;
	char	is_not_set;
	char	next_is_set;

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

size_t	ft_letters_count(char const *str, char set, size_t i)
{
	size_t	count;

	count = 0;
	while (str[i] && str[i] != set)
	{
		count++;
		i++;
	}
	return (count);
}

static char	**ft_create_new_tab(char **new_tab, char const *str, char set,
size_t i)
{
	size_t	row;
	size_t	column;
	size_t	length;

	row = 0;
	column = 0;
	length = 0;
	while (str[i])
	{
		if (str[i++] != set)
		{
			length = ft_letters_count(str, set, i);
			new_tab[row] = malloc(sizeof(char) * (length + 1));
			if (!new_tab[row])
				return (NULL);
			while (column < length)
				new_tab[row][column++] = str[i++];
			new_tab[row++][column] = '\0';
			column = 0;
			--i;
		}
	}
	new_tab[row] = NULL;
	return (new_tab);
}

char	**ft_split(char const *str, char set)
{
	size_t	string_count;
	char	**new_tab;
	size_t	i;

	if (!str)
		return (NULL);
	string_count = ft_new_string_count(str, set);
	if (string_count == 0 )
	{
		new_tab = (char **)malloc(sizeof(char *) * 1);
		new_tab[0] = NULL;
		return (&new_tab[0]);
	}
	new_tab = (char **)malloc(sizeof(char *) * (string_count + 1));
	if (!new_tab)
		return (NULL);
	i = 0;
	return (ft_create_new_tab(new_tab, str, set, i));
}
