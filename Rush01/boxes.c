/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boxes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toramo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 10:19:27 by toramo            #+#    #+#             */
/*   Updated: 2023/07/09 19:17:45 by aanferov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void    ft_psolution(int *rows);
void    numgen(int *rows, int *x);
int     check_boxes(int *solution, int dimension, int *input);

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp1;
	int	temp2;
	int	i;

	i = 0;
	while (i < size / 2)
	{
	temp1 = tab[i];
	temp2 = tab[size - 1 - i];
	tab[size - 1 - i] = temp1;
	tab[i] = temp2;
	i++;
	}
}

int	boxes(int *input)
{
	int	*rows;
	int	*x;
	int	a;

	x = &a;
	rows = malloc(sizeof(int) * 16);
	while (*x < 331776)
	{
		numgen(rows, x);
		if (check_boxes(rows, 4, input))
		{	
			ft_psolution(rows);
			free(rows);
			return (1);
		}
		*x = *x + 1;
	}
	if (*x == 331776)
		write(1, "Error\n", 6);
	free(rows);
	return (0);
}
