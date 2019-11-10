/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opperations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:33:51 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/16 11:12:08 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"

int		ft_add(int a, int b)
{
	return (a + b);
}

int		ft_div(int a, int b)
{
	return (a / b);
}

int		ft_mod(int a, int b)
{
	return (a % b);
}

int		ft_mul(int a, int b)
{
	return (a * b);
}

int		ft_sub(int a, int b)
{
	return (a - b);
}
