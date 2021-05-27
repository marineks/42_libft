/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:48:02 by msanjuan          #+#    #+#             */
/*   Updated: 2021/05/27 18:32:05 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <unistd.h>	 /* Library for the write function */
# include <stdio.h>		/* For quick testing purposes - printf function */
# include <string.h>	/* For auick testing purposes - string manipulation functions */
# include <stdlib.h>	/* To enable the use of malloc in some functions */

int	main(void)
{
	
	printf("---->>FT_STRCHR<<-------------------------------------------------------\n\n");
	printf("      Ma Fonction : %s | La vraie : %s\n", ft_strchr("hello", 108), strchr("hello", 108));
	printf("\n");
	
	printf("---->>FT_ATOI<<-------------------------------------------------------\n\n");
	printf("      Ma fonction: %d | La vraie : %d\n", ft_atoi("-42"), atoi("-42"));
	printf("\n");

	char dst[] = "hello";
	const char src[] = "heyhohey";
	size_t n = 5;
	printf("---->>FT_STRLCPY<<-------------------------------------------------------\n\n");
	printf("      Ma fonction: %lu | La vraie : %lu\n", ft_strlcpy(dst, src, n), strlcpy(dst, src, n));
	printf("\n");

	char dust[] = "Foo Bar Baz Bar";
	const char sarc[] = "Baz";
	size_t no = 14;
	printf("---->>FT_STRNSTR<<-------------------------------------------------------\n\n");
	printf("      Ma fonction: %s | La vraie : %s\n", ft_strnstr(dust, sarc, no), strnstr(dust, sarc, no));
	printf("\n");

	char s1[30] = "hello";
	const char s2[] = "ceci est un test";
	size_t s1size = 22;
	char s3[30] = "hello";
	const char s4[] = "ceci est un test";
	size_t s3size = 22;
	printf("---->>FT_STRLCAT<<-------------------------------------------------------\n\n");
	printf("      Ma fonction: %lu | La vraie : %lu\n", ft_strlcat(s1, s2, s1size), strlcat(s3, s4, s3size));
	printf("\n");

	printf("---->>FT_STRDUP<<-------------------------------------------------------\n\n");
	printf("      Ma fonction: %s | La vraie : %s\n", ft_strdup("Born to code"), strdup("Born to code"));
	printf("\n");
	free(ft_strdup("Born to code"));
	free(strdup("Born to code"));
	
	return (0);
}
