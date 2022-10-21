/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:13:32 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/10/12 15:27:15 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n && s1[i] == s2[i])
		i++;
	if (i == n)
		i--;
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	char str1[] = "abercrombie";
	char str2[] = "abercRombie";
	printf("Original: %d \n", strncmp(str1, str2, 7));
	printf("Fake: %d \n", ft_strncmp(str1, str2, 7));
}
*/