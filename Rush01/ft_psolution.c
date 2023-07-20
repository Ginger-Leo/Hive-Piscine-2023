/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_psolution.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanferov <aanferov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 08:43:17 by aanferov          #+#    #+#             */
/*   Updated: 2023/07/09 17:30:45 by aanferov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//printing out found solution in a grid of dimension x dimension
void	ft_psolution(int *rows)
{
	int	i;
	int	j;
	char temp;

	i = 0;
	while (i < 16)
	{
		j = 0;
		while (j < 4)
		{
			temp = rows[i] + 48;
			write (1, &temp, 1);
			if (j < 3)
				write (1, " ", 1);
			i++;
			j++;
		}
		if (i < 15)
			write (1, "\n", 1);
	}
}
