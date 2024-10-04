#include <unistd.h>

char *ft_string_add(char *str1, char*str2)
{
	int i;
	i = 0;
	while (str1[i])
	{
		i++;
	}
	int j;
	j = 0;
	while (str2[j])
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	return (str1);
}

int main()
{
    char s1[50] = "Hello";
	char s2[] = "Bro";
	char *string = ft_string_add(s1, s2);
	int x;
	x = 0;
	while (string[x] != '\0')
	{
		write(1, &string[x], 1);
		x++;
	}
}
