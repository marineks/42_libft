/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 11:57:04 by msanjuan          #+#    #+#             */
/*   Updated: 2021/05/24 12:02:43 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int a)
{
	if ( (a > 64 && a < 91) || (a > 96 && a < 123))
		return (1);
	else
		return (0);
}

int	ft_isdigit(int b)
{
	if (b > 48 && b < 58)
		return (1);
	else
		return (0);
}

int ft_isalnum(int c)
{
	if ( ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
		return (1);
	else
		return (0);
}
