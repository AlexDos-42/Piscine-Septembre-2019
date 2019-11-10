/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 20:44:01 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/15 22:43:30 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			ft_double(char **dict_in_tab)
{
	int		i;
	int		j;
	int		n;

	i = 0;
	while (dict_in_tab[i])
	{
		j = i + 1;
		while (dict_in_tab[j])
		{
			n = 0;
			while (dict_in_tab[j][n] >= '0' && dict_in_tab[j][n] <= '9')
				n++;
			{
				if (ft_strncmp(dict_in_tab[i], dict_in_tab[j], n) == 0)
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int			ft_check_format(char **dict_in_tab)
{
	int		i;
	int		j;
	i = -1;
	while (dict_in_tab[++i])
	{
		j = 0;
		if (dict_in_tab[i][j] <= '0' && dict_in_tab[i][j] >= '9')
			return (0);
		while (dict_in_tab[i][j] >= '0' && dict_in_tab[i][j] <= '9')
			j++;
		while (dict_in_tab[i][j] == ' ')
			j++;
		if (dict_in_tab[i][j++] != ':')
			return (0);
		while (dict_in_tab[i][j] == ' ')
			j++;
		if (dict_in_tab[i][j] == '\0')
			return (0);
	}
	if (ft_double(dict_in_tab) == 0)
		return (0);
	return (1);
}
