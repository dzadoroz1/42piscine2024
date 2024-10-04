#include <unistd.h>

void	ft_change_case(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				argv[i][j] -= 32;
			}
			else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
			{
				argv[i][j] += 32;
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
		return 0;
	}
	ft_change_case(argc, argv);
	int x;
	int y;

	x = 1;
	while (x < argc)
	{
		y = 0;
		while (argv[x][y])
		{
			write(1, &argv[x][y], 1);
			y++; 
		}
		x++;
		write(1, "\n", 1);
	}
	return(0);
}