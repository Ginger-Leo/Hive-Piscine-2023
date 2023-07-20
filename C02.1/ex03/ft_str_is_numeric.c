/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:25:26 by lstorey           #+#    #+#             */
/*   Updated: 2023/07/07 09:58:40 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
    printf("%d\n", ft_str_is_numeric(""));
    printf("%d\n", ft_str_is_numeric("340569"));
    printf("%d\n", ft_str_is_numeric("4 candles"));
	printf("%d\n", ft_str_is_numeric("QWERTY"));
}*/
