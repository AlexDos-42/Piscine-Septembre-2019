/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:40:39 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/10 20:44:03 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 64

int		main(int argc, char **argv)
{
	int			files;
	int			read_size;
	char		buf[BUF_SIZE + 1];

	if (argc < 2)
	{
		write(STDERR_FILENO, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(STDERR_FILENO, "Too many arguments.\n", 20);
		return (1);
	}
	if ((files = open(argv[1], O_RDONLY)) == -1)
	{
		write(STDERR_FILENO, "Cannot read file.\n", 18);
		return (1);
	}
	while ((read_size = read(files, buf, BUF_SIZE)))
		write(STDOUT_FILENO, buf, read_size);
	if (close(files))
		return (1);
	return (0);
}
