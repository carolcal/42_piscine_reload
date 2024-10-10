/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:22:18 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/30 19:32:48 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb > 1)
	{
		result = 1;
		while (nb > 0)
		{
			result = result * nb;
			nb --;
		}
		return (result);
	}
	else if (nb >= 0)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_factorial(6));
	return(0);
}*/
