/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_find.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 21:34:20 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/15 23:27:02 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"   

void		ft_dict_error(void)
{
	write(2, "Dict Error\n", 11);
}

void		ft_free(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void		ft_search_and_find(unsigned long long nb, char *dict)
{
	char	**dict_trie;
	char	*dict_in_tab;

	dict_in_tab = ft_recuperation(dict);
	if (dict_in_tab == 0)
	{
		ft_dict_error();
		return ;
	}
	dict_trie = ft_split(dict_in_tab, "\n");
	if (dict_trie == 0 || ft_check_format(dict_trie) == 0)
	{
		ft_dict_error();
		return ;
	}
	free(dict_in_tab);
	if (nb == 0)
		ft_affichage_unite(0, dict_trie);
	else
		ft_aff_mille(nb, dict_trie, 0);
	ft_putstr("\n");
	ft_free(dict_trie);
}
