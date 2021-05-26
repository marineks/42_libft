/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:38:43 by msanjuan          #+#    #+#             */
/*   Updated: 2021/05/26 14:54:28 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int result;
	int n;
	int i;

	result = 0;
	n = 1;
	i = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -n;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * n);
}
