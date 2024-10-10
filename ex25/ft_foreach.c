/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:46:43 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/03 19:20:05 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

/*#include <unistd.h>

void	ft_printnbr(long nb)
{
	char	c;

	if (nb > 9)
		ft_printnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	long_nb;

	long_nb = nb;
	if (long_nb < 0)
	{
		write(1, "-", 1);
		long_nb = -long_nb;
	}
	ft_printnbr(long_nb);
}*/

/*#include <stdlib.h>
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
int	main(void)
{
	int	*tab;
	int	min = 5;
	int	max = 13;
	int	length = max - min;

	tab = ft_range(min, max);

	ft_foreach(tab, length, &ft_putnbr);
	return(0);
}*/
