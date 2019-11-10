/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:34:08 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/13 19:21:07 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <libgen.h>
# include <string.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>
# include <errno.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
int		add_char_to_buffer(char *buffer, char cbuf, int length, int limit);
int		ft_atoi(char *str);
int		error(char *program, char *filename);
int		error_message(char *program, char *message);
int		illegal_offset(char *program, char *offset);
int		usage_info(char *program);

#endif
