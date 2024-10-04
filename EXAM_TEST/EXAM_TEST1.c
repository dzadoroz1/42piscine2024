#include <unistd.h>

void	ft_uppercase(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				argv[i][j] -= 32;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "Error(no arguments)\n", 20);
		return (0);
	}
	ft_uppercase(argc, argv);
	int  x;
	int  y;

	x = 1;
	while (x < argc)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			write(1, &argv[x][y], 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
	return(0);
}