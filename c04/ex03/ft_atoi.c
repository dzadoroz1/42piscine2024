/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:47:10 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/09/30 10:09:42 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	short	parity;
	int		number;

	number = 0;
	parity = number;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		++str;
	}
	if (parity % 2 == 0)
		return (number);
	return (-number);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *s = "  ---+--+1234ab567";
// 	printf("%d\n", ft_atoi(s));
// }