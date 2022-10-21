/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:20:11 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/10/12 17:45:47 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>	
# include <unistd.h>
# include <stddef.h>

int		ft_isalpha(int c);
int		ft_isdigit(int arg);
int		ft_isalnum(int arg);
int		ft_isascii(int c);
int		ft_isprint(int arg);
int		ft_strlen(const char *s);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_atoi(const char *str);
char	*ft_strdup(const char *s);

#endif