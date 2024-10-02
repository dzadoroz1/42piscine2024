/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:23:36 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/10/01 19:27:59 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int number = 144;
// 	printf("%d\n", ft_sqrt(number));
// 	return (0);
// }