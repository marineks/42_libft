/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:55:34 by msanjuan          #+#    #+#             */
/*   Updated: 2021/05/25 15:21:06 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* ne pas oublier de gerer le cas ou c == '\0' dans la limite des 25l */

int	ft_strlen(const char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strchr(const char *s, int c)
{
	char *dest;
	int i;
	int j;

	dest = malloc(ft_strlen(s) * sizeof(char));
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i])
			{
				dest[j] = s[i];
				i++;
				j++;
			}
			dest[j] = '\0';
			return (dest);
		}
		i++;
	}
	return (NULL);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Ma Fonction : %s | La vraie : %s\n", ft_strchr(argv[1], 108), strchr(argv[1], 108));
	}
	return (0);
}
