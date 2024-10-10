/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:33:27 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/03 10:45:23 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	diff;
	int	i;

	range = NULL;
	if (min >= max)
		return (range);
	diff = max - min;
	range = (int *)malloc(diff * sizeof(int));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*#include <stdio.h>
int	main(void)
{
	unsigned long	i;
	unsigned long	size;
	int	*range;
	int min = 2, max = 227;

	i = 0;
	range = ft_range(min, max);
	size = max - min;
	while (i < size)
	{
		printf("%i, ", range[i]);
		i++;
	}
	return (0);
}*/
