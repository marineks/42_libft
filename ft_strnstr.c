/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:23:19 by msanjuan          #+#    #+#             */
/*   Updated: 2021/05/26 18:52:33 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*   The strnstr() function locates the first occurrence of the null-terminated string needle in
	 the string haystack, where not more than len characters are searched.  Characters that
	 appear after a `\0' character are not searched.  
	 If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack,
	 NULL is returned; otherwise a pointer to the first character of the first occurrence of
	 needle is returned. 
	 */

# include "libft.h"

char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	char *res;

	res = (char *)haystack;
	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return (res);
	while (i < len)
	{
		while (haystack[i + j] == needle[j])
		{
			if (j == ft_strlen(needle) - 1)
				return (res + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
