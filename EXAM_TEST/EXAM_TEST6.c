#include <stdio.h>

int ft_compare(char *str1,char *str2)
{
	int i;

	i = 0;
	while(str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

int main()
{
    char s1[] = "Microwave";
	char s2[] = "microWave";
	int res;
	res = ft_compare(s1, s2);
	printf("%d\n", res);
}
