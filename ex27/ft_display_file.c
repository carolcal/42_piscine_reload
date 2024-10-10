/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:34:43 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/08 13:49:24 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

int	read_file(char *filename)
{
	int		fd;
	int		read_bytes;
	char	buffer[1024];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (1);
	read_bytes = read(fd, buffer, sizeof(buffer));
	while (read_bytes > 0)
	{
		write (1, &buffer, read_bytes);
		read_bytes = read(fd, buffer, sizeof(buffer) - 1);
	}
	close(fd);
	return (0);
}

int	main(int argc, char*argv[])
{
	int	resp;

	if (argc == 1)
	{
		write (1, "File name missing.\n", 19);
		return (1);
	}
	else if (argc == 2)
		resp = read_file(argv[1]);
	else
	{
		write (1, "Too many arguments.\n", 20);
		return (1);
	}
	return (resp);
}
