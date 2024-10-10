/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:37:47 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/02 17:09:05 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	dest = (char *)malloc(len);
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char *src1 = "Meu nome é Julia.";
// 	char *dest1 = strdup(src1);
// 	char *src2 = "E o seu é Ana.";
// 	char *dest2 = ft_strdup(src2);
// 	printf("%s \n", dest1);
// 	printf("%s", dest2);
// 	return(0);
// }
