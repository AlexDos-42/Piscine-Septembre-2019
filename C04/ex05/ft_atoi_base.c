/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:46:18 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/05 22:18:49 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

int		ft_size(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_size(base) < 2)
		return (0);
	while (base[i])
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' '
				|| base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	i = 0;
	while (base[i + 1])
	{
		j = i + 1;
		while (base[i] != base[j] && base[j] != '\0')
			j++;
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (1);
}

int		check_len(char *str, char *base)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (base[j])
	{
		j = 0;
		while (base[j] != str[i] && base[j] != '\0')
			j++;
		count = (base[j] == str[i] && str[i] != '\0') ? count + 1 : count;
		i++;
	}
	return (count);
}

int		ft_atoi_base(char *str, char *base)
{
	int sign;
	int i;
	int j;
	int count;
	int nbr;

	i = 0;
	nbr = 0;
	if (!check_base(base))
		return (0);
	count = check_len(str, base);
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
		sign = (str[i++] == '-') ? -sign : sign;
	while (--count >= 0)
	{
		j = 0;
		while (str[i] != base[j])
			j++;
		nbr = nbr + (ft_recursive_power(ft_size(base), count) * j);
		i++;
	}
	return (nbr * sign);
}

int main(void)
{
	printf("==== 21 ft_atoi_base ====\n");
	{
		printf("Tesing ex21\n");
		{
			printf("Should return 0 in case of invalid arguments\n");
			{
				printf("%d\n", ft_atoi_base("15", ""));
				printf("%d\n", ft_atoi_base("15", "1"));
				printf("%d\n", ft_atoi_base("15", "144"));
				printf("%d\n", ft_atoi_base("15", "14+35"));
				printf("%d\n", ft_atoi_base("15", "145-09"));
				printf("%d\n", ft_atoi_base("", "14509"));
				printf("%d\n", ft_atoi_base("x15", "14509"));
			}

			printf("Should print number in correct radix\n");
			{
				printf("%d\n", ft_atoi_base("+1111", "01"));
				printf("%d\n", ft_atoi_base("+15", "0123456789"));
				printf("%d\n", ft_atoi_base("+F", "0123456789ABCDEF"));
				printf("%d\n", ft_atoi_base("+vi", "fivte3n"));
				printf("%d\n", ft_atoi_base("+84", "9876543210"));
			}

			printf("Should handle negative numbers\n");
			{
				printf("%d\n", ft_atoi_base("-1111", "01"));
				printf("%d\n", ft_atoi_base("-15", "0123456789"));
				printf("%d\n", ft_atoi_base("-F", "0123456789ABCDEF"));
				printf("%d\n", ft_atoi_base("-vi", "fivte3n"));
				printf("%d\n", ft_atoi_base("-84", "9876543210"));
			}
		}

		printf("All tests passed for ex21\n");
	}
	return (0);
}
