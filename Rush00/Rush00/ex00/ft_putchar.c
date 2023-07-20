/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcayot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:18:48 by jcayot            #+#    #+#             */
/*   Updated: 2023/07/01 16:12:53 by jcayot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int column, int line, int current_column, int current_line)
{
	char	char_to_display;

	if (current_column == 0 || current_column == column - 1)
	{
		if (current_line == 0)
			char_to_display = 'o';
		else if (current_line == line - 1)
			char_to_display = 'o';
		else
			char_to_display = '|';
	}
	else
	{
		if (current_line == 0 || current_line == line - 1)
			char_to_display = '-';
		else
			char_to_display = ' ';
	}	
	write(1, &char_to_display, 1);
}
