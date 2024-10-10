/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:24:03 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/02 16:18:35 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char *s1 = "So os cria";
// 	char *s2 = "Hello";
// 	printf("Original: %i \n", strcmp(s1, s2));
// 	char *s3 = "So os cria";
// 	char *s4 = "Hello";
// 	printf("Mine: %i \n", ft_strcmp(s3, s4));
// 	return (0);
// }
