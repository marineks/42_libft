/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:48:02 by msanjuan          #+#    #+#             */
/*   Updated: 2021/05/26 18:53:54 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <unistd.h>	 /* Library for the write function */
# include <stdio.h>		/* For quick testing purposes - printf function */
# include <string.h>	/* For auick testing purposes - string manipulation functions */
# include <stdlib.h>	/* To enable the use of malloc in some functions */

int	main(void)
{
		printf("---->>FT_ATOI<<-------------------------------------------------------\n");
		printf("Ma fonction: %d | La vraie : %d\n", ft_atoi("-42"), atoi("-42"));
		printf("\n");

		char dst[] = "hello";
		const char src[] = "heyhohey";
		size_t n = 5;
		printf("---->>FT_STRLCPY<<-------------------------------------------------------\n");
		printf("Ma fonction: %lu | La vraie : %lu\n", ft_strlcpy(dst, src, n), strlcpy(dst, src, n));
		printf("\n");
		
		char dust[] = "Foo Bar Baz Bar";
		const char sarc[] = "Baz";
		size_t no = 14;
		printf("---->>FT_STRNSTR<<-------------------------------------------------------\n");
		printf("Ma fonction: %s | La vraie : %s\n", ft_strnstr(dust, sarc, no), strnstr(dust, sarc, no));
		printf("\n");
		
		return (0);
}
