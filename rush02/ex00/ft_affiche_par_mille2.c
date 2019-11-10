/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_affiche_par_mille2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:19:13 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/15 22:50:33 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		ft_affiche_dix_espace(unsigned long long nb)
{
		if (nb % 10 != 0)
					ft_putstr(" ");
}

void		ft_affiche_teen(unsigned long long nb, char **dict_in_tab)
{
	int		i;
	char	teen[2];

	i = 0;
	teen[0] = nb / 10 + '0';
	teen[1] = nb % 10 + '0';
	while (dict_in_tab[i])
	{
		if (ft_strncmp(teen, dict_in_tab[i], 2) == 0
				&& (dict_in_tab[i][2] < '0' || dict_in_tab[i][2] > '2'))
			break ;
		i++;
	}
	ft_putstr(ft_format(dict_in_tab[i] + 2));
}
