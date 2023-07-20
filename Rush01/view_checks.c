/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_checks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toramo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:22:56 by toramo            #+#    #+#             */
/*   Updated: 2023/07/09 20:09:32 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	column_up(int *solution, int dimension, int *input)
{
	int	view;
	int	c;
	int	j;
	int	maxh;

	j = 0;
	while (j < dimension)
	{	
		c = 0;
		view = 1;
		maxh = solution[j + c * dimension];
		while (c < dimension)
		{
			if (solution[j + c * dimension] > maxh)
			{
			view++;
			maxh = solution[j + c * dimension];
			}
			c++;
			if (view > input[j])
				return (0);
		}
		j++;
	}
	return (1);
}

int	column_down(int *solution, int dimension, int *input)
{
	int	view;
	int	c;
	int	j;
	int	maxh;

	j = dimension;
	while (j < dimension * 2)
	{	
		view = 1;
		c = dimension - 1;
		maxh = solution[(j - dimension) + c * dimension];
		while (c >= 0)
		{
			if (solution[(j - dimension) + c * dimension] > maxh)
			{
			view++;
			maxh = solution[(j - dimension) + c * dimension];
			}
		c--;
			if (view > input[j])
				return (0);
		}
		j++;
	}
	return (1);
}

int	row_left(int *solution, int dimension, int *input)
{
	int	view;
	int	c;
	int	j;
	int	maxh;

	j = 2 * dimension;
	while (j < dimension * 3)
	{	
		c = 0;
		view = 1;
		maxh = solution[(j - (2 * dimension)) * dimension + c];
		while (c < dimension)
		{	
			if (solution[(j - (2 * dimension)) * dimension + c] > maxh)
			{
				view++;
				maxh = solution[(j - (2 * dimension)) * dimension + c];
			}
				c++;
			if (view > input[j])
				return (0);
		}
		j++;
	}
	return (1);
}

int	row_right(int *solution, int dimension, int *input)
{
	int	c;
	int	view;
	int	j;
	int	maxh;

	j = 3 * dimension;
	while (j < dimension * 4)
	{
		c = dimension - 1;
		view = 1;
		maxh = solution[((j - (3 * dimension))) * dimension + c];
		while (c >= 0)
		{
			if (solution[((j - (3 * dimension))) * dimension + c] > maxh)
			{
				view++;
				maxh = solution[((j - (3 * dimension))) * dimension + c];
			}
				c--;
			if (view > input[j])
				return (0);
		}
		j++;
	}
	return (1);
}
/*
int	main(void)
{
	//int	solution[16] = {1, 2, 3, 4, 2, 3, 4, 1, 3, 4, 1, 2, 4, 1, 2, 3};
	int	solution[16] = {4, 1, 2, 3, 2, 3, 4, 1, 3, 4, 1, 2, 1, 2, 3, 4};
	int	input[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
	
	printf("%d\n", column_up(solution, 4, input));
	printf("%d\n", column_down(solution, 4, input));
	printf("%d\n", row_left(solution, 4, input));
	printf("%d\n", row_right(solution, 4, input));
}*/
