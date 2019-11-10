/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:52:35 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/18 18:37:41 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

t_list	*ft_create_elem(void *data)

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

#endif
