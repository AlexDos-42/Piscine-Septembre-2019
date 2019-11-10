/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:00:16 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/14 14:50:29 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libgen.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#define BUFF_SIZE 2000

void	ft_readwrite(void)
{
	char	buff[1];

	while (read(0, buff, 1))
	{
		write(1, buff, 1);
	}
}

void	ft_error(char *path, char *file)
{
	int		i;
	char	*error;

	i = 0;
	while (path[i])
		write(2, &path[i++], 1);
	write(1, ": ", 2);
	i = 0;
	while (file[i])
		write(2, &file[i++], 1);
	write(1, ": ", 2);
	error = strerror(errno);
	while (*error)
		write(2, error++, 1);
	write(1, "\n", 1);
}

void	ft_cat(int file)
{
	int		ret;
	char	buff[BUFF_SIZE + 1];

	while ((ret = read(file, buff, BUFF_SIZE)))
	{
		buff[ret] = '\0';
		write(1, buff, ret);
		ret = 0;
	}
}

int		main(int ac, char *av[])
{
	int i;
	int file;

	if (ac == 1 || av[1][0] == '-')
		ft_readwrite();
	i = 1;
	while (i < ac)
	{
		errno = 0;
		file = open(av[i], O_RDONLY);
		if (file == -1)
			ft_error(basename(av[0]), av[i]);
		else
			ft_cat(file);
		i++;
		close(file);
	}
}
