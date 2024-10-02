/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:32:31 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/10/02 15:10:08 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puts(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **x, char **y)
{
	char	*temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(char *argv[], int argc)
{
	int	i;
	int	j;
	int	l;

	l = argc;
	while (l > 1)
	{
		i = 0;
		j = 1;
		while (j < l)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_swap(&argv[i], &argv[j]);
			}
			i++;
			j++;
		}
		l--;
	}
}

int	main(int argc, char *argv[])
{
	int	k;

	ft_sort(argv + 1, argc - 1);
	k = 1;
	while (k < argc)
	{
		ft_puts(argv[k]);
		k++;
	}
}
