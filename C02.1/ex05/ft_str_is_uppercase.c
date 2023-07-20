/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:21:03 by lstorey           #+#    #+#             */
/*   Updated: 2023/07/07 11:46:26 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
				i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{		
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase(" "));
	printf("%d\n", ft_str_is_uppercase("340569"));
	printf("%d\n", ft_str_is_uppercase("candles"));
	printf("%d\n", ft_str_is_uppercase("QWERTY"));
}
*/
