/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:42:32 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/09/30 17:17:00 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	number;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	number = 1;
	while (nb > 1)
	{
		number *= nb;
		nb--;
	}
	return (number);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int x = 5;
// 	printf("%d\n", ft_iterative_factorial(x));
// 	return (0);
// }