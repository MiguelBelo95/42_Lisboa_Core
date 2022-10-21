/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:04:33 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/10/12 15:26:40 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* functions copy size chars from source to dest
and concatenates the strings respectively. */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = 0;
	while (src[s_len])
		s_len++;
	if (size == 0 || !dst)
		return (s_len);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s_len);
}

/*
#include <stdio.h>

int main(void)
{
	char dest[10];
	char source[] = "campeao";

	printf("Initial dest: %s\n", dest);
	ft_strlcpy(dest, source, 9);
	printf("Changed dest: %s\n", dest);

	return (0);
}
*/