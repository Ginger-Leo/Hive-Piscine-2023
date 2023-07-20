/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:57:14 by lstorey           #+#    #+#             */
/*   Updated: 2023/07/06 15:12:19 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}
/*

int main(void)
{
	char *src = "Hello everyone";	
	char dest[20] = "and hello to you";

	printf ("%s\n", src);

	ft_strncpy(dest, src, 10);

	printf ("%s\n%s", src, dest);

	return (0);

}*/
