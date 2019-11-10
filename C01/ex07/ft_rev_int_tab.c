/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 14:36:28 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/03 18:05:08 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int c;

	i = 0;
	while (i < size)
	{
		size--;
		c = tab[i];
		tab[i] = tab[size];
		tab[size] = c;
		i++;
	}
}
