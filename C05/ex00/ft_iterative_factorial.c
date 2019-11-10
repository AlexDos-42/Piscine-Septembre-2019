/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 10:24:16 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/03 10:44:13 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		factorial;
	int		i;

	if (nb < 0)
		return (0);
	i = 1;
	factorial = 1;
	while (i < nb + 1)
		factorial = factorial * i++;
	return (factorial);
}
