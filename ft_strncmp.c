/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:41:20 by msanjuan          #+#    #+#             */
/*   Updated: 2021/05/24 15:38:13 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* A/ SOIT les chaines sont egales et on retourne 0; 
 * B/ SOIT s1 est plus petite que s2 et on retourne <0 
 * C/ SOIT s1 est plus grande que s2 et on retourne >0
 * ATTENTION : prendre en compte les cas ou n est plus grand que s1 ou s2*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	i = 0;

	while (s1[i] && s2[i] && i != '\0' && i < n - 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i]- s2[i]);
}
