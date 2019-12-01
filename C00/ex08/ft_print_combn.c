/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 13:57:03 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/02 14:17:29 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nbr(int *tab, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + 48);
		i++;
	}
}

void	ft_print_n_numbers(int *tab, int i, int n)
{
	int		j;

	while (1)
	{
		while ((tab[i] == (10 + (i - n))) && i >= 0)
			i--;
		if (i < 0)
			return ;
		tab[i]++;
		j = i + 1;
		while (j <= n)
		{
			tab[j] = tab[j - 1] + 1;
			j++;
		}
		i = n - 1;
		ft_putchar(',');
		ft_putchar(' ');
		ft_print_nbr(tab, n);
	}
}

void	ft_print_combn(int n)
{
	int		nbr_de_n[9];
	int		i;

	i = 0;
	while (i <= n)
	{
		nbr_de_n[i] = i;
		i++;
	}
	i = (n - 1);
	ft_print_nbr(nbr_de_n, n);
	ft_print_n_numbers(nbr_de_n, i, n);
}
