/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:36:00 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/10/07 23:40:39 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char *ft_strchr(const char *s, int c)
{
	const char *l;
	int i;

	i = 0;
	l = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			l = &s[i];
			return (l);
		}
		i++;
	}
	return (l);
}