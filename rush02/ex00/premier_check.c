/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   premier_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 21:33:00 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/15 22:48:23 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"



int		ft_check_arg(char *number)
{
	int i;

	i = 0;
	if (number[i] < '0' || number[i] > '9')
		return (0);
	while (number[i] >= '0' && number[i] <= '9')
		i++;
	if (number[i] != '\0')
		return (0);
	return (1);
}

void		ft_error(void)
{
	write(2, "Error\n", 6);
}

void		ft_premier_check(char *number, char *dict)
{
	unsigned long long	nb;
	int			len;

	len = ft_strlen(number);
	nb = ft_atoi(number);
	if (len > 19)
	{
		ft_error();
		return ;
	}
	if (ft_check_arg(number) == 0)
	{
		ft_error();
		return ;
	}
	ft_search_and_find(nb, dict);
}
