/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:50:42 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/10/12 16:00:28 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* function zoncatenates strings. take the full size of the buffer
(not just the length) and guarantee to NUL-terminate the result.
It will append at most size - strlen(dst) - 1
RETURNS: length of dst plus the length of src */

#include <stddef.h>

int	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;

	d_len = ft_strlen(dst);
	if (size <= d_len)
		return (size + ft_strlen(src));
	i = 0;
	while (i < (size - d_len - 1) && src[i])
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + i);
}

/*
#include <stdio.h>

int main(void)
{
	char dest[100] = "Benfica ";
	char *source = "campeao";

	printf("Initial dest: %s\n", dest);
	ft_strlcat(dest, source, 25);
	printf("Changed dest: %s\n", dest);

	return (0);
}
*/