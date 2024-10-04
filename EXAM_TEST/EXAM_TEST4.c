#include <unistd.h>
#include <stdlib.h>

char *ft_dup(char *str)
{
	int j;
	int size;
	j = 0;
	size = 0;

	while(str[size])
	{
		size++;
	}
	char *dup = malloc((size+1) * sizeof(char));
	while (str[j])
	{
		dup[j] = str[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "Error\n", 6);
		return 0;
	}
	char *s;
	int i;
	i = 0;
	s = ft_dup(argv[1]);
	while(s[i] != '\0')
	{
		write (1, s+i, 1);
		i++;
	}
	free(s);
}