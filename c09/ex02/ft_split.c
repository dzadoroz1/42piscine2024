/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:34:49 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/10/08 12:33:42 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	in_set(char c, char *charset)
{
	int	i;

	i = -1;
	while (i++, charset[i] != 0)
		if (c == charset[i])
			return (1);
	return (0);
}

int	numwords(char *str, char *charset)
{
	int	i;
	int	word_num;

	i = 0;
	word_num = 0;
	while (str[i] != 0)
	{
		if (in_set(str[i], charset) == 0)
			if (in_set(str[i + 1], charset) == 1 || str[i + 1] == 0)
				word_num++;
		i++;
	}
	return (word_num);
}

void	add_result(char *r_str, int s_i, int e_i, char *str)
{
	int	i;

	i = 0;
	while (s_i + i <= e_i)
	{
		r_str[i] = str[s_i + i];
		i++;
	}
	r_str[i] = 0;
}

void	alloc_str(char **result, int w_i, int i, int s_i)
{
	result[w_i] = (char *)malloc(sizeof(char) * (i - s_i + 2));
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		w_i;
	int		s_i;

	result = (char **)malloc(sizeof(char *) * (numwords(str, charset) + 1));
	i = -1;
	w_i = 0;
	s_i = 0;
	while (i++, str[i] != 0)
	{
		if (in_set(str[i], charset) == 1 || str[i] == 0)
			s_i = i + 1;
		if (in_set(str[i], charset) == 0)
		{
			if (in_set(str[i + 1], charset) == 1 || str[i + 1] == 0)
			{
				alloc_str(result, w_i, i, s_i);
				add_result(result[w_i], s_i, i, str);
				w_i++;
			}
		}
	}
	result[w_i] = 0;
	return (result);
}
