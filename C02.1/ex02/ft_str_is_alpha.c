/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:55:11 by lstorey           #+#    #+#             */
/*   Updated: 2023/07/06 17:44:23 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		else
		i++;
	}	
	return (1);
}
/*
int main(void)
{
	printf("%d\n", ft_str_is_alpha(""));	

	printf("%d\n", ft_str_is_alpha("N0 Buen0"));

	printf("%d\n", ft_str_is_alpha("Bueno"));

}*/
