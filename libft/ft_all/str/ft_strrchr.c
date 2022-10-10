/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:14:09 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/10/07 23:46:53 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	const char *l;
	int i;

	i = ft_strlen(s);
	l = 0;
	while (i >= 0)
	{
		if (s[i] == c)
		{
			l = &s[i];
			return (l);
		}
		i--;
	}
	return (l);
}