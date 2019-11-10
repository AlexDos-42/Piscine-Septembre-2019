/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 12:43:56 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/06 12:40:36 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tmp;

	tmp = NULL;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(tmp = malloc(sizeof(int) * (max - min))))
		return (-1);
	i = 0;
	while (i < max - min)
	{
		tmp[i] = min + i;
		i++;
	}
	*range = tmp;
	return (max - min);
}
