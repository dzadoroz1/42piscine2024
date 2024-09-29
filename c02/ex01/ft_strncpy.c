/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:17:36 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/09/28 11:26:47 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main() {
//     char src[] = "Hello bro!";
//     char dest[15];
//     ft_strncpy(dest, src, 5);
//     printf("Source: %s\n", src);
//     printf("Destination (5 chars): %s\n", dest);
//     ft_strncpy(dest, src, 10);
//     printf("Destination (10 chars): %s\n", dest);
//     return (0);
// }