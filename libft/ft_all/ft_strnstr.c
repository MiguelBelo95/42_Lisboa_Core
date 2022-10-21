/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:47:20 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/10/12 18:57:26 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
FUNCTION:
	locate a substring in a string;
RETURN:
	If little is an empty string, big is returned;
	if little occurs nowhere in big, NULL is returned;
	otherwise a pointer to the first character of the
	first occurrence of little is returned.
*/

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	const char *temp;

	if (!little)
		return ((char *)big);

	i = 0;

	while (i < len)
	{
		j = 0;
		while (little[j] != big[i])
			i++;
		while (little[j] == big[i + j])
			j++;
		if (j == len - 1)
		{
			temp = &big[i + j];
			return ((char *)temp);
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int main(void)
{
	char *l = "";
	char *b = "batatas frita com ketchup";

	printf("Big: %s\n", b);
	printf("return str: %s\n", ft_strnstr(b, l, 18));
	return (0);
}