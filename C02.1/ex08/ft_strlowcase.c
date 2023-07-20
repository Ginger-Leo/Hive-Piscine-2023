/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:19:19 by lstorey           #+#    #+#             */
/*   Updated: 2023/07/08 11:28:12 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
	{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		str[i] = str[i] +32;
		else
		i++;
	}
	return (str);
}
/*
int	main(void)
{
		char c[] = "TesteR";
		printf("%s\n", ft_strlowcase(c));
}*/
