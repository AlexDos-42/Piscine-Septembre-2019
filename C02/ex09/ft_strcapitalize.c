/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 18:42:57 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/02 18:44:20 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

char		*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	ft_strupcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90)
				&& ((str[i - 1] >= 65 && str[i - 1] <= 90)
					|| (str[i - 1] >= 97 && str[i - 1] <= 122)
					|| (str[i - 1] >= 48 && str[i - 1] <= 57)))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
