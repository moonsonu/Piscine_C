/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 10:48:50 by ksonu             #+#    #+#             */
/*   Updated: 2017/07/13 21:34:01 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		dump_file(char *filename)
{
	int		fd;
	int		bytes_read;
	char	buffer[4096 * 16];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (1);
	bytes_read = read(fd, buffer, sizeof(buffer));
	if (bytes_read < 0)
		return (1);
	while (bytes_read > 0)
		write(1, buffer, bytes_read);
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	char *m;

	m = "Makefile";
	if (argc < 2)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else if (dump_file(argv[1]))
		write(1, "Error\n", 6);
	else if (*argv[1] == *m)
		write(1, "*contenu du Makefile*\n", 22);
	return (0);
}
