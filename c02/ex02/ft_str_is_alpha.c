/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:39:32 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/09/25 19:49:42 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a'
				|| str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char str1[] = "AaZz";
// 	printf("Is %s alphabetic? %d\n", str1, ft_str_is_alpha(str1));
// 	return 0;
// }