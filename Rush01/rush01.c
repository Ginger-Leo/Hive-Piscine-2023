/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanferov <aanferov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:45:28 by aanferov          #+#    #+#             */
/*   Updated: 2023/07/09 21:56:04 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_input_parser(char *str, int *input);
int ft_check_input(int *input);
int	boxes(int *input, char *argv);
void	clear_input(int *input)
{
	int	i;

	while (i < 16)
	{
		input[i] = -1;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	*input;

	input = malloc(sizeof(int) * 16);	
	if (argc < 2)
	{
		write(1, "ERROR:no arguments", 18);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "ERROR:too many arguments", 24);
		return (0);
	}
	clear_input(input);
//	if (ft_input_parser(argv[1], input) == 1)
//	{
//		if (ft_check_input(input) == 1)
//		{
			boxes(input, argv[1]);
//		}
//	}
//	else
		return (0);
}
