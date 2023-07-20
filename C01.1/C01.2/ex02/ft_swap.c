/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:41:39 by lstorey           #+#    #+#             */
/*   Updated: 2023/07/05 15:09:07 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
/*int main(void)
{
	int *a;
	int *b;
	int nbr1;
	int nbr2;

	nbr1 = 10;
	nbr2 = 20;

	a = &nbr1;
	b = &nbr2;

	ft_swap(a, b);

	printf("%d\n", *a);
	printf("%d", *b);

	return (0);

}*/
