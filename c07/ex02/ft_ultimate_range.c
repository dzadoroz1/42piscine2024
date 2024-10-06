/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:35:28 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/10/03 19:39:37 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;
	int	j;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	result = malloc(i * sizeof(int));
	if (result == NULL)
	{
		return (-1);
	}
	*range = result;
	j = 0;
	while (min < max)
	{
		result[j] = min;
		min++;
		j++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int x_min;
// 	int x_max;
// 	int *size_of_range;
// 	int size;
// 	int i;

// 	x_min = -20;
// 	x_max = 20;
// 	i = 0;
// 	size = ft_ultimate_range(&size_of_range, x_min, x_max);
// 	printf("%d\n", size);
// 	while (i < size)
// 	{
// 		printf("%d, ", size_of_range[i]);
// 		i++;
// 	}
// }