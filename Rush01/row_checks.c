/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_checks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toramo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:21:36 by toramo            #+#    #+#             */
/*   Updated: 2023/07/09 20:06:54 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	columns(int *solution, int dimension)
{
	int	x;
	int	c;
	int	j;

	j = 0;
	while (j < dimension)
	{
		c = 0;
		while (c < dimension)
		{	
			x = 1;
			while (x < dimension)
			{
				if (solution[((c + x) * dimension)
						% (dimension * dimension) + j]
					== (solution[j + (c * dimension)]))
					return (0);
				x++;
			}
			c++;
		}
		j++;
	}
	return (1);
}

int	rows(int *solution, int dimension)
{
	int	x;
	int	c;
	int	j;

	j = 0;
	while (j < dimension)
	{
		c = 0;
		while (c < dimension)
		{
			x = 1;
			while (x < dimension)
			{
				if (solution[(dimension * j) + (c + x) % dimension]
					== (solution[(dimension * j) + c]))
					return (0);
				x++;
			}
			c++;
		}
		j++;
	}
	return (1);
}

/*
int	main(void)
{
//	int	solution[16] = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4};
	int	solution[16] = {1, 2, 3, 4, 2, 3, 4, 1, 3, 4, 1, 2, 4, 1, 2, 3};
	printf("%d\n", rows(solution, 4));
	printf("%d\n", columns(solution, 4));
}*/
