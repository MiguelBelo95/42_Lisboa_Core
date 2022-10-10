#include <stdio.h>

const char *ft_strrchr(const char *s, int c);

int main(void)
{
	const char *str;
	int c;
	char arr[] = "McacaelerAcorda Pedridnho";

	c = 'A';

	/*
	str = (const char *)malloc(sizeof(char) * 5);
	if (*str == 0)
	{
		printf("Deu cócó!");
		return (1);
	}
	*/

	str = arr;
	printf("Initial String: %s\n", str);
	printf("String: %s\n", ft_strrchr(str, c));
	return (0);
}
