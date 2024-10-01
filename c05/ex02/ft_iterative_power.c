/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:20:39 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/09/30 16:41:56 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	total;
	int	i;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	total = 1;
	i = 0;
	while (i < power)
	{
		total *= nb;
		i++;
	}
	return (total);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int number = 3;
// 	int power = 3;
// 	printf("%d\n", ft_iterative_power(number, power));
// 	return (0);
// }