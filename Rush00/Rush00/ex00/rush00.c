/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcayot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:57:32 by jcayot            #+#    #+#             */
/*   Updated: 2023/07/01 16:04:51 by jcayot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int column, int line, int current_column, int current_line);

void	rush(int column, int line)
{
	int		current_column;
	int		current_line;
	char	nl;

	current_line = 0;
	nl = '\n';
	while (current_line < line)
	{
		current_column = 0;
		while (current_column < column)
		{
			ft_putchar(column, line, current_column, current_line);
			current_column++;
		}
		write(1, &nl, 1);
		current_line++;
	}
}
