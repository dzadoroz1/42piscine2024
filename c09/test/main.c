/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzadoroz <dzadoroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:40:06 by dzadoroz          #+#    #+#             */
/*   Updated: 2024/10/08 11:59:19 by dzadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		in_set(char c, char *charset);
int		numwords(char *str, char *charset);
void	add_result(char *r_str, int s_i, int e_i, char *str);
void	alloc_str(char **result, int w_i, int i, int s_i);
char	**ft_split(char *str, char *charset);

int	main(void)
{
	char str[] = "Hello, world! test.";
	char charset[] = " ,.!?";
	char **result;
	int i = 0;

	result = ft_split(str, charset);

	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}

	free(result);
	return (0);
}