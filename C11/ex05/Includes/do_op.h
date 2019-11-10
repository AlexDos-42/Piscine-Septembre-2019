/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:32:43 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/13 15:24:14 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_atoi(char *str);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
void			do_op(char *nb1, char *operator, char *nb2);

typedef struct	s_operations
{
	char	operator;
	int		(*op)(int, int);
}				t_operations;

#endif
