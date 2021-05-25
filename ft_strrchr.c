/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:23:54 by msanjuan          #+#    #+#             */
/*   Updated: 2021/05/25 16:27:15 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int ft_strlen(const char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strrchr(const char *s, int c)
{
	char *dest;
	int i;
	int j;

	dest = malloc(ft_strlen(s) * sizeof(char));
	i = ft_strlen(s) - 1;
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
			return (dest);
		}
		i--;
	}
	return (NULL);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Ma fonction: %s | La vraie: %s\n", ft_strrchr(argv[1], 108), strrchr(argv[1], 108));
	}
	return (0);
}


