/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 08:41:39 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/06 14:13:47 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int				ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strcat(char *dest, char *src)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int				taille_str_join(int size, char **strs, char *sep)
{
	int			i;
	int			len;

	if (size <= 0)
		return (0);
	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	return (len + (size - 1) * ft_strlen(sep));
}

char			*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	char		*str_join;
	int			taille;

	i = 0;
	taille = taille_str_join(size, strs, sep);
	if (!(str_join = malloc(sizeof(char) * (taille + 100))))
		return (NULL);
	while (i < taille)
		str_join[i++] = 0;
	str_join[taille] = '\0';
	if (!size)
		return (str_join);
	i = 0;
	while (i < size)
	{
		ft_strcat(str_join, strs[i]);
		if (i < size - 1)
			ft_strcat(str_join, sep);
		i++;
	}
	return (str_join);
}
