/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:14:09 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/10/12 15:24:12 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

/* ft_strrchr function reversely searches for char c in str,
returning a pointer to the char in the string if found */

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			res = (char *)s;
		s++;
	}
	if ((unsigned char)c == 0)
	{
		return ((char *)s);
	}
	return (res);
}

/*
#include <stdio.h>

int main(void)
{
	char c = 'A';
	char arr[] = "McacaelerAcorda Pedridnho";

	printf("Initial String: %s\n", arr);
	printf("String: %s\n", ft_strrchr(arr, c));
	return (0);
}
*/
