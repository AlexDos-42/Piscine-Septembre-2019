/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:25:59 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/13 19:21:34 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		error_message(char *program, char *message)
{
	char	formated[500];
	int		length;

	ft_strcpy(formated, basename(program));
	ft_strcat(formated, ": ");
	ft_strcat(formated, message);
	length = 0;
	while (formated[length])
		length++;
	write(2, formated, length);
	usage_info(program);
	return (-1);
}

int		error(char *program, char *filename)
{
	char	formated[500];
	int		length;

	ft_strcpy(formated, basename(program));
	ft_strcat(formated, ": ");
	ft_strcat(formated, filename);
	ft_strcat(formated, ": ");
	ft_strcat(formated, strerror(errno));
	ft_strcat(formated, "\n");
	length = 0;
	while (formated[length])
		length++;
	write(2, formated, length);
	return (errno);
}

int		illegal_offset(char *program, char *offset)
{
	char	formated[500];
	int		length;

	ft_strcpy(formated, basename(program));
	ft_strcat(formated, ": illegal offset -- ");
	ft_strcat(formated, offset);
	ft_strcat(formated, "\n");
	length = 0;
	while (formated[length])
		length++;
	write(2, formated, length);
	return (-1);
}

int		usage_info(char *program)
{
	char	formated[500];
	int		length;

	ft_strcpy(formated, "usage: ");
	ft_strcat(formated, basename(program));
	ft_strcat(formated, " -c # [files]\n");
	length = 0;
	while (formated[length])
		length++;
	write(2, formated, length);
	return (1);
}
