/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:26:54 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/10/01 11:42:00 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1 || index == 2)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	for (int n = 0; n < 21; n++)
// 	{
// 		printf("%d\n", ft_fibonacci(n));
// 	}
//     return (0);
// }