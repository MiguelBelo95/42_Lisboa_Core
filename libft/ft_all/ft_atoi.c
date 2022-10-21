/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:06:42 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/10/12 16:34:54 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
This function returns the converted integral number as an int value.
If no valid conversion could be performed, it returns zero.
*/

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				mult;
	int				res;

	mult = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mult *= -1;
		i++;
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * mult);
}

/*
#include <stdio.h>

int main (int ac, char *av[])
{
	printf("input: %s\n", av[ac - 1]);
	printf("ATOI: %d\n", ft_atoi(av[ac - 1]));
	return (0);
}
*/