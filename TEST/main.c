#include "converter.h"
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	char output[4096 + 1];
	int fd;
	int size;

	if (argc != 2)
		return (1);

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (1);

	size = read(fd, output, 4096);
	if (size == -1)
	{
		close(fd);
		return (1);
	}
	output[size] = '\0';

	char *result = ft_strstr(output, argv[1]);
	if (result && result < output + size)
	{
		int i = 0;
		while (argv[1][i] != '\0')
			i++;
		result += i;

		while (*result == ':' || *result == ' ')
			result++;

		while (*result != '\0' && *result != '\n' && result < output + size)
			write(1, result++, 1);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "Not found\n", 10);
	}

	close(fd);
	return (0);
}