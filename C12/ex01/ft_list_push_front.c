/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:53:25 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/18 18:37:19 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *tmp;

	tmp = *begin_list;
	if (!tmp)
		*begin_list = ft_create_elem(data);
	else
	{
	new = ft_create_elem(data);
	new->next = tmp;
	*begin_list = new;
	}
}
