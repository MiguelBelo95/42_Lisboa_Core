/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:43:36 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/10/12 17:45:04 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function returns a pointer to a null-terminated byte string,
which is a duplicate of the string pointed to by s.
The memory obtained is done dynamically using malloc.
*/

#include <stdlib.h>

int	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		size;

	size = ft_strlen(s);
	copy = (char *)malloc(sizeof(char) * (size + 1));
	if (!copy)
		return (NULL);
	size = -1;
	while (s[++size])
		copy[size] = s[size];
	copy[size] = '\0';
	return (copy);
}

/*
#include <stdio.h>

int main(void)
{
	char str[] = "Leitão é para comer de tronco nu";

	printf("str: %s\n", str);
	printf("copied str: %s\n", ft_strdup(str));
	return (0);
}
*/