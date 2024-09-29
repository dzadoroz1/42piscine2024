/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:12:39 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/09/23 14:33:21 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int main()
// {
// 	int x = 42;
// 	int y = 24;
// 	printf("before: x=%d, y=%d\n", x, y);
// 	ft_swap(&x, &y);
// 	printf("after: x=%d, y=%d", x, y);
// 	return (0);
// }