/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:10:07 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/03 10:19:46 by cayamash         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	**sort_strs(int size, char *strs[])
{
	int		i;
	int		swapped;
	char	*temp;

	i = 0;
	swapped = 0;
	while (i < size)
	{
		if (ft_strcmp(strs[i], strs[i + 1]) > 0)
		{
			temp = strs[i];
			strs[i] = strs[i + 1];
			strs[i + 1] = temp;
			swapped = 1;
		}
		i++;
	}
	if (swapped == 1)
		return (sort_strs(size, strs));
	return (strs);
}

int	main(int argc, char*argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		sort_strs(argc - 1, argv);
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
