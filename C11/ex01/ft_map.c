/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:18:58 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/11 11:31:21 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tab_mem;

	if ((tab_mem = (int*)malloc(sizeof(int) * length)) == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		tab_mem[i] = (*f)(tab[i]);
		i++;
	}
	return (tab_mem);
}
