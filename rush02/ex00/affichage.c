/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:43:24 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/15 23:24:29 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		ft_affiche_dix(unsigned long long nb, char **dict_in_tab)
{
	int		i;
	char	dix[2];

	i = 0;
	dix[0] = nb + '0';
	dix[1] = '0';
	while (dict_in_tab[i])
	{
		if (ft_strncmp(dix, dict_in_tab[i], 2) == 0
				&& (dict_in_tab[i][2] < '0' || dict_in_tab[i][2] > '2'))
			break ;
		i++;
	}
	ft_putstr(ft_format(dict_in_tab[i] + 2));
}

void		ft_affichage_espace_centaines(unsigned long long nb)
{
	if (nb % 100 != 0 || nb % 10 != 0)
		ft_putstr(" ");
}

void		ft_affichage_centaines(char **dict_in_tab)
{
	int		i;
	char	cent[3];

	i = 0;
	cent[0] = '1';
	cent[1] = '0';
	cent[2] = '0';
	while (dict_in_tab[i])
	{
		if (ft_strncmp(cent, dict_in_tab[i], 3) == 0
				&& (dict_in_tab[i][3] < '0' || dict_in_tab[i][3] > '9'))
			break ;
		i++;
	}
	ft_putstr(ft_format(dict_in_tab[i] + 3));
}

void		ft_affichage_unite(unsigned long long nb, char **dict_in_tab)
{
	int		i;
	char	u;

	i = 0;
	u = nb + '0';
	while (dict_in_tab[i])
	{
		if (dict_in_tab[i][0] == u
				&& (dict_in_tab[i][1] < '0' || dict_in_tab[i][1] > '9'))
			break ;
		i++;
	}
	ft_putstr(ft_format(dict_in_tab[i] + 1));
}

void		ft_aff_modulo(unsigned long long nb, char **dict_in_tab)
{
	if (nb >= 100)
	{
		ft_affichage_unite(nb / 100, dict_in_tab);
		ft_putstr(" ");
		ft_affichage_centaines(dict_in_tab);
		ft_affichage_espace_centaines(nb);
		nb %= 100;
	}
	if (nb > 19)
	{
		ft_affiche_dix(nb / 10, dict_in_tab);
		ft_affiche_dix_espace(nb);
		if (nb % 10 != 0)
			ft_affichage_unite(nb % 10, dict_in_tab);
	}
	if (nb < 20 && nb > 9)
	{
		ft_affiche_teen(nb, dict_in_tab);
	}
	if (nb < 10 && nb > 0)
		ft_affichage_unite(nb, dict_in_tab);
}
