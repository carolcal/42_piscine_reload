/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:39:28 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/03 19:13:20 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	resp;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		resp = (*f)(tab[i]);
		if (resp == 1)
			count++;
		i++;
	}
	return (count);
}

/*#include <stdio.h>
int	teste(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		if(string[i] == 'a')
			return (1);
		i++;

	}
	return (0);
}
int	main(void)
{
	char *arr[] = {
		"Hello world!", 
		"Welcome", 
		"this is an array", 
		"Enjoy coding", 
		"C programming", 
		0
	};
	printf("%i", ft_count_if(arr, &teste));
	return (0);
}*/
