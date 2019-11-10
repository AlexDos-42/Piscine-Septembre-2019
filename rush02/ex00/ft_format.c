/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:24:48 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/15 22:47:38 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			ft_format_suite(char *c)
{
	int i;
	int compt;

	compt = 1;
	i = 0;
	while (c[i] == ' ' || (c[i] == ':' && compt == 1))
	{
		if (c[i] == ':')
			compt = 0;
		i++;
	}
	return (i);
}

char		*ft_format(char *c)
{
	int i;
	int j;
	int compt;

	i = ft_format_suite(c);
	j = 0;
	while (c[i])
	{
		compt = 1;
		while (c[i] == ' ')
		{
			if (compt == 1)
				c[j++] = ' ';
			compt = 0;
			i++;
		}
		if (c[i] >= 33 && c[i] <= 126 && c[i] != ' ')
		{
			c[j] = c[i];
			j++;
		}
		i++;
	}
	c[j] = '\0';
	return (c);
}
