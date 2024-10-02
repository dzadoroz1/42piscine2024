/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:05:25 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/10/01 15:18:19 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_for_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_check_for_prime(nb) == 0)
	{
		nb += 1;
	}
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int number = 9;
// 	printf("%d\n", ft_find_next_prime(number));
// }