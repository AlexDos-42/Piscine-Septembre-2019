/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 08:52:36 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/06 08:53:13 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int        ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
	
char    *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char tmp;
	j = ft_strlen(str) - 1;
	
		while (i < j)
		{
			tmp = str[i];
			str[i] = str[j];
			str[j] = tmp;
			i++;
			j--;
		}
	return (str);
}
	
int        nb_len(int nb)
{
	int count = 0;

		while (nb)
		{
			nb = nb / 10;
			count++;
		}
	return (count);
}

char    *ft_itoa(int nbr)
{
	int i = 0;
	int signe = 0;

		char *dest;
	dest = malloc(sizeof(char) * nb_len(nbr) + (nbr < 0 ? 2 : 1));
	if (nbr == 0)
	{
		dest = "0";
		return(dest);
	}
	if (nbr == -2147483648)
	{
		dest = "-2147483648";
		return (dest);
	}
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		signe = 1;
	}
	while (nbr)
	{
		dest[i] = nbr % 10 + 48;
		nbr = nbr / 10;
		i++;
	}
	if (signe == 1)
	{
		dest[i] = '-';
		i++;
	}
	dest[i] = '\0';
	ft_strrev(dest);
	return (dest);
}

