/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanferov <aanferov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 09:57:18 by aanferov          #+#    #+#             */
/*   Updated: 2023/07/09 17:47:13 by aanferov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Checking if we have a valid set up input for views
int	ft_check_input(int *input)
{	
	int	i;

	i = 0;
	while (i < 16)
	{
		if (input[i] >= 1 && input[i] <= 4)
		{
			i++;
		}
		else
		{
			write(1, "ERROR:invalid input", 19);
			return (1);
		}
	}
	return (1);
}
