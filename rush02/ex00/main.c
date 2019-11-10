/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 20:35:41 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/15 22:48:07 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			main(int argc, char **argv)
{
	if (argc > 3)
	{
		ft_error();
		return (0);	
	}
	if (argc == 2)
	{
		ft_premier_check(argv[1], "numbers.dict");
		return (0);
	}
	if (argc == 3)
		ft_premier_check(argv[2], argv[1]);
	return (0);
}
