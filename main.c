/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:48:02 by msanjuan          #+#    #+#             */
/*   Updated: 2021/05/31 10:51:20 by msanjuan         ###   ########.fr       */
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
	
	printf("---->>FT_STRRCHR<<-------------------------------------------------------\n\n");
	printf("      Ma Fonction : %s | La vraie : %s\n", ft_strrchr("hello", 108), strrchr("hello", 108));
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

	int  test;
	int test2;

	test=4;
	test2=4;
	printf("---->>FT_MEMSET<<-------------------------------------------------------\n\n");
	printf("      Ma fonction: %s | La vraie : %s\n", ft_memset((void*)&test, 'M', 3), memset((void*)&test2, 'M', 3));
	printf("\n");

	printf("---->>FT_BZERO<<-------------------------------------------------------\n\n");
	
	char * test3;
	char * test4;

	test3[40] = "Bonjour tout le monde";
	test4[40] = "Bonjour tout le monde";
	ft_bzero((void*)&test3, 3);
	bzero((void*)&test4, 3);
	printf("      Ma fonction: %s | La vraie : %s\n", test3, test4);
	printf("\n");
	
	printf("---->>FT_CALLOC<<-------------------------------------------------------\n\n");
	
	printf("      Ma fonction: %s | La vraie : %s\n", ft_calloc(3, 12), calloc(3, 12));
	free(ft_calloc(3, 12));
	free(calloc(3, 12));
	printf("\n");

	
	printf("---->>FT_MEMCHR<<-------------------------------------------------------\n\n");
	int  test6;
	int test5;

	test6=4;
	test5=4;
	printf("      Ma fonction: %s | La vraie : %s\n", ft_memchr((void*)&test6, 'M', 3), memchr((void*)&test5, 'M', 3));
	printf("\n");
	return (0);
}
