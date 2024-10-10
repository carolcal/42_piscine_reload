/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:34:05 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/02 12:02:14 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	div;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb >= 4)
	{
		div = 2;
		while (div <= nb / 2 && div < 46341)
		{
			if (div * div == nb)
				return (div);
			div++;
		}
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("0:%i \n", ft_sqrt(0));
	printf("1:%i \n", ft_sqrt(1));
	printf("2:%i \n", ft_sqrt(2));
	printf("4:%i \n", ft_sqrt(4));
	printf("16:%i \n", ft_sqrt(16));
	printf("36:%i \n", ft_sqrt(36));
	printf("144:%i \n", ft_sqrt(144));
	printf("2147395600:%i \n", ft_sqrt(2147395600));
	printf("2147483647:%i \n", ft_sqrt(2147483647));
	return (0);
}*/
