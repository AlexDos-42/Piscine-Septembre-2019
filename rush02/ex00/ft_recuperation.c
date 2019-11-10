/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recuperation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 21:51:08 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/15 22:47:49 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		*ft_recuperation(char *dict)
{
	int		fd;
	int		taille;
	char	buff;
	char	*dict_in_tab;
	int		i;

	if ((fd = open(dict, O_RDONLY)) == -1)
		return (0);
	taille = 0;
	while (read(fd, &buff, 1) != 0)
		taille++;
	close(fd);
	if (!(dict_in_tab = malloc(sizeof(char) * (taille + 1))))
		return (0);
	if ((fd = open(dict, O_RDONLY)) == -1)
		return (0);
	i = 0;
	while (read(fd, &buff, 1) != 0)
	{
		dict_in_tab[i] = buff;
		i++;
	}
	dict_in_tab[i] = '\0';
	close(fd);
	return (dict_in_tab);
}
