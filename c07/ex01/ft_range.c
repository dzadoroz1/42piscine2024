/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:25:46 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/10/03 18:28:56 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	j;
	int	*range;

	if (min >= max)
	{
		return (NULL);
	}
	j = 0;
	range = malloc((max - min) * sizeof(int));
	if (range == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		range[j] = min;
		min++;
		j++;
	}
	return (range);
}

// #include <stdio.h>
// int main()
// {
//     int x_min = -11;
//     int x_max = 102;
//     int i;

//     i = 0;
//     int *result = ft_range(x_min, x_max);
//     while (i < (x_max - x_min))
//     {
//         printf("%d ", result[i]);
//         i++;
//     }
//     free(result);
// }