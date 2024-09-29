/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:33:36 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/09/28 13:28:04 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i != n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

// int	main(void)
// {
// 	char str1[] = "Hello333";
// 	char str2[] = "Hello999";
// 	printf("Difference : %d\n", ft_strncmp(str1, str2, 5));
// 	printf("Difference : %d\n", ft_strncmp(str1, str2, 8));
// }