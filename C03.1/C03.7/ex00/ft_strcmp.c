/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:29:26 by lstorey           #+#    #+#             */
/*   Updated: 2023/07/12 11:08:52 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int main(void)
{
	char s1[] = "test";
	char s2[] = "testicles";

 	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s2, s1));
	printf("%d\n", ft_strcmp(s1, s1));

}*/
