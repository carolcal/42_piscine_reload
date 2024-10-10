/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:03:34 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/03 10:18:19 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	if (*str != '\0')
	{
		ft_putchar(*str);
		str++;
		ft_putstr(str);
	}
}

/*int	main(void)
{
	char *str = "Hello World!";
	ft_putstr(str);
	return(0);
}*/
