/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage_par_mille.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 11:21:21 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/15 23:26:21 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		ft_affiche_milliard(char **dict_in_tab)
{
	int		i;
	char	milliard[10];

	i = 1;
	milliard[0] = '1';
	while (i <= 9)
	{
		milliard[i] = '0';
		i++;
	}
	i = 0;
	while (dict_in_tab[i])
	{
		if (ft_strncmp(milliard, dict_in_tab[i], 10) == 0
				&& (dict_in_tab[i][10] < '0' || dict_in_tab[i][10] > '9'))
			break ;
		i++;
	}
	ft_putstr(ft_format(dict_in_tab[i] + 10));
}

void		ft_affichage_million(char **dict_in_tab)
{
	int		i;
	char	million[7];

	i = 1;
	million[0] = '1';
	while (i <= 6)
	{
		million[i] = '0';
		i++;
	}
	i = 0;
	while (dict_in_tab[i])
	{
		if (ft_strncmp(million, dict_in_tab[i], 7) == 0
				&& (dict_in_tab[i][7] < '0' || dict_in_tab[i][7] > '9'))
			break ;
		i++;
	}
	ft_putstr(ft_format(dict_in_tab[i] + 7));
}

void		ft_affichage_mille(char **dict_in_tab)
{
	int		i;
	char	mille[4];

	i = 0;
	mille[0] = '1';
	mille[1] = '0';
	mille[2] = '0';
	mille[3] = '0';
	while (dict_in_tab[i])
	{
		if (ft_strncmp(mille, dict_in_tab[i], 4) == 0
				&& (dict_in_tab[i][4] < '0' || dict_in_tab[i][4] > '9'))
			break ;
		i++;
	}
	ft_putstr(ft_format(dict_in_tab[i] + 4));
}

void		ft_affichage_000(int nb_000, char **dict_in_tab)
{
	ft_putstr(" ");
	if (nb_000 == 1)
		ft_affichage_mille(dict_in_tab);
	if (nb_000 == 2)
		ft_affichage_million(dict_in_tab);
	if (nb_000 == 3)
		ft_affiche_milliard(dict_in_tab);
	ft_putstr(" ");
}

void		ft_aff_mille(unsigned long long nb, char **dict_in_tab, int nb_000)
{
	int i;

	i = 0;
	if (nb > 999)
	{
		ft_aff_mille(nb / 1000, dict_in_tab, nb_000 + 1);
		ft_aff_mille(nb % 1000, dict_in_tab, nb_000);
	}
	else
	{
		ft_aff_modulo(nb, dict_in_tab);
		if (nb_000 > 0 && nb > 0)
			ft_affichage_000(nb_000, dict_in_tab);
	}
}
