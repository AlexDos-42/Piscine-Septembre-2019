/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 09:52:46 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/17 14:46:22 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int				check_error(char *base)
{
	int			i;
	int			j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void			ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nb;

	if (!check_error(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = -(unsigned int)nbr;
	}
	else
		nb = nbr;
	if (nb < ft_strlen(base))
		ft_putchar(base[nb]);
	else
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}

int main()
{
	ft_putnbr_base(-42, "0123456789a");
	printf("\n");
	ft_putnbr_base(145778, "01");
	printf("\n");
	ft_putnbr_base(145778, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(145778, "poneyvif");
	return 0;
}
