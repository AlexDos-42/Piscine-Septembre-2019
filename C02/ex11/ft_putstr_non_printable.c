/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 19:16:41 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/18 20:40:40 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr_non_printable(char *str)
{
	unsigned char		tmp;
	unsigned char		*tab;
	char				*hex;

	hex = "0123456789abcdef";
	tab = (unsigned char*)str;
	while (*tab != '\0')
	{
		if (*tab >= ' ' && *tab <= '~')
			write(1, tab, 1);
		else
		{
			ft_putchar('\\');
			tmp = *tab / 16;
			ft_putchar(hex[tmp]);
			tmp = *tab % 16;
			ft_putchar(hex[tmp]);
		}
		tab++;
	}
}
