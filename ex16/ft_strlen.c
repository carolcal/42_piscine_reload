/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:14:08 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/02 12:22:35 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*#include <stdio.h>
int	main(void)
{
	char *str = "Meu nome é Caroline!!!";
	int len1 = strlen(str);
	int len2 = ft_strlen(str);
	printf("original: %i, minha: %i \n", len1, len2);
	return(0);
}*/
