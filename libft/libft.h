#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

int ft_isalpha(int c);
int ft_isdigit(int arg);
int ft_isalnum(int arg);
int ft_isascii(int c);
int ft_isprint(int arg);
int ft_strlen(const char *s);
int ft_toupper(int ch);
int ft_tolower(int ch);
const char *ft_strrchr(const char *s, int c);

#endif