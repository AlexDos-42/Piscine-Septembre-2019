/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 14:37:10 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/03 14:38:08 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int			ft_find_next_prime(int nb)
{
	int		i;

	i = nb;
	if (nb < 2)
		return (2);
	while (ft_is_prime(i) == 0)
		i++;
	return (i);
}
