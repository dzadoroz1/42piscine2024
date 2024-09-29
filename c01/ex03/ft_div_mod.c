/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:23:07 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/09/23 14:32:34 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main()
// {
// 	int a = 10;
// 	int b = 3;
// 	int div;
// 	int mod;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf ("%d %d\n", div, mod);
// 	return (0);
// }