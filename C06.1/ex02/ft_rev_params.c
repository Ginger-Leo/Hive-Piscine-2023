/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:07:44 by lstorey           #+#    #+#             */
/*   Updated: 2023/07/18 11:07:08 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char*argv[])
{
	int	c;

	c = (argc - 1);
	while (c > 0)
	{
		ft_putstr(argv[c]);
		write(1, "\n", 1);
		c--;
	}
}
