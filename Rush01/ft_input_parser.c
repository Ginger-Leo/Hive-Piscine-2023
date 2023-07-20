/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanferov <aanferov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:05:26 by aanferov          #+#    #+#             */
/*   Updated: 2023/07/09 17:45:48 by aanferov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//removing spaces from input and turning into ints for easier handling later on
int	ft_input_parser(char *str, int *input)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != 32)
		{
			input[j] = (str[i] - 48);
			j++;
		}
		i++;
	}
	if (j > 16)
	{
		write(1, "ERROR:incorrect amount of set up inputs", 39);
		return (0);
	}
	return (1);
}
