/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:52:08 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/09/25 19:57:31 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = temp_a / *b;
	*b = temp_a % *b;
}

// int main()
// {
// 	int x = 10;
// 	int y = 4;
// 	ft_ultimate_div_mod(&x, &y);
// 	printf("%d %d\n", x, y);
// 	return (0);
// }