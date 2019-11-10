/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 21:10:14 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/18 10:55:19 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <libgen.h>
# include <string.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>

typedef struct	s_buffer
{
	char	*previous;
	char	*current;
	int		bytes;
	int		total;
}				t_buffer;

int				write_hex(int size, int nbr);
int				write_chars_hex(char *buffer, int c_op, int bytes);
int				write_chars(char *buffer, int bytes);
void			clean_buffer(t_buffer *buffer);
void			ft_display_buffer(t_buffer *buffer, int c_op);
char			*ft_strcpy(char *dest, char *src);
char			*ft_ncpy(char *dest, char *src, unsigned int size);
char			*ft_strcat(char *dest, const char *src);
int				ft_strcmp(char *s1, char *s2);
int				ft_ncmp(char *s1, char *s2, unsigned int n);

#endif
