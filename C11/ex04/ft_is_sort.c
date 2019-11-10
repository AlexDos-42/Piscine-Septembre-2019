/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:30:15 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/15 22:30:22 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int ascend;
	int descend;

	i = 0;
	ascend = 1;
	descend = 1;
	if (length >= 0 && length <= 1)
		return (1);
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			ascend = 0;
		else if ((*f)(tab[i], tab[i + 1]) > 0)
			descend = 0;
		i++;
	}
	return (ascend || descend ? 1 : 0);
}
