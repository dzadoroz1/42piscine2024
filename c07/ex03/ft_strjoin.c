/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:31:46 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/10/05 17:05:03 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	sep_len;

	i = 0;
	len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += sep_len;
		i++;
	}
	return (len);
}

char	*ft_check(char *s)
{
	s = malloc(1);
	if (s == NULL)
	{
		return (NULL);
	}
	s[0] = '\0';
	return (s);
}

int	ft_str_copy(char *dest, char *src, int x)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[x++] = src[i++];
	}
	return (x);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		x;
	int		total_len;

	s = NULL;
	if (size == 0)
		return (ft_check(s));
	x = 0;
	total_len = ft_total_length(size, strs, sep);
	s = malloc((total_len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		x = ft_str_copy(s, strs[i], x);
		if (i < size - 1)
		{
			x = ft_str_copy(s, sep, x);
		}
		i++;
	}
	s[x] = '\0';
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s[3];
// 	char	*s1;

// 	s[0] = "not";
// 	s[1] = "like";
// 	s[2] = "us";
// 	s1 = ft_strjoin(3, s, "---");
// 	printf("%s\n", s1);
// }
