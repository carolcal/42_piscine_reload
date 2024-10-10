/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:34:24 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/30 19:43:15 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb >= 0)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%i", ft_recursive_factorial(6));
	return(0);
}*/
