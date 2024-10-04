#include <stdio.h>

int ft_atoi(char *str)
{
	int number;
	int parity;

	number = 0;
	parity = number;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
	{
		++str;
	}

	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			parity++;
		}
		++str;
	}

	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str - 48;
		++str;
	}

	if (parity % 2 == 0)
	{
		return (number);
	}
	return (-number);
}

int main()
{
	char *s = "   -+-+--+-1234abc567";
	int num;
	num = ft_atoi(s);
	printf("%d\n", num);
}