/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:48:19 by lstorey           #+#    #+#             */
/*   Updated: 2023/07/07 12:38:47 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
    printf("%d\n", ft_str_is_printable(""));
    printf("%d\n", ft_str_is_printable(" "));
    printf("%d\n", ft_str_is_printable("340569"));
    printf("%d\n", ft_str_is_printable("candles"));
    printf("%d\n", ft_str_is_printable("QWERTY"));
}*/
