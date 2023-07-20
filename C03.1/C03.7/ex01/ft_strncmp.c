/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:51:12 by lstorey           #+#    #+#             */
/*   Updated: 2023/07/15 14:44:05 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n - 1)
	{	
		if (s1[i] != s2[i])
			return (s1[i] - s2 [i]);
	i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void)
{

char				s1[] = "testy";
char				s2[] = "testyes";
unsigned int		len;

	len =  6;
	printf("%d\n", ft_strncmp(s1, s2, len));
	printf("%d\n", strncmp(s1, s2, len));

	len = 8;
	printf("%d\n", ft_strncmp(s1, s2, len));
	printf("%d\n", ft_strncmp(s2, s1, len));

}*/
