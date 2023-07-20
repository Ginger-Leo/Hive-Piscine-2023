/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_boxes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toramo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 06:23:36 by toramo            #+#    #+#             */
/*   Updated: 2023/07/09 22:14:43 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	columns(int *solution, int dimension);
int	rows(int *solution, int dimension);
int	column_up(int *solution, int dimension, int *input);
int	column_down(int *solution, int dimension, int *input);
int	row_left(int *solution, int dimension, int *input);
int	row_right(int *solution, int dimension, int *input);

void parse(char *argv, int *temp)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
while (argv[i] && temp[j] < 16)
	{
		if (argv[i] != 32 && argv[i] > 48 && argv[i] < 53)
		{
			temp[j] = (argv[i] - 48);
			j++;
		}
		i++;
	}
}

int	check_boxes(int *solution, int dimension, char *argv)
{
	int	y;
	int	j;
	int	*temp;

	temp = malloc(sizeof(int) * 16);
	clear_input(temp);
	parse(argv, temp);
	if (!(columns(solution, dimension)))
		return (0);
	if (!(rows(solution, dimension)))
		return (0);
	if (!(column_up(solution, dimension, temp)))
		return (0);
	if (!(column_down(solution, dimension, temp)))
		return (0);
	if (!(row_left(solution, dimension, temp)))
		return (0);
	if (!(row_right(solution, dimension, temp)))
		return (0);
	return (1);
}
/*
int	main(void)
{
	int	solution[16] = {1, 2, 3, 4, 2, 3, 4, 1, 3, 4, 1, 2, 4, 1, 2, 3};
	//int	solution[16] = {4, 1, 2, 3, 2, 3, 4, 1, 3, 4, 1, 2, 1, 2, 3, 4};
	int	input[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};

	printf("%d\n", check_boxes(solution, 4, input));

}*/
