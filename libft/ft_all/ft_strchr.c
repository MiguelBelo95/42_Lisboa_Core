/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:36:00 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/10/12 15:25:54 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

/* ft_strchr function searches for char c in str,
returning a pointer to the char in the string if found */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == 0)
		return ((char *)s);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	char c = 'o';
	char arr[] = "McacaelerAcorda Pedridnho";

	printf("Initial String: %s\n", arr);
	printf("String: %s\n", ft_strchr(arr, c));
	return (0);
}
*/