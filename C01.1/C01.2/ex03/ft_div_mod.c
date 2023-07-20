/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:29:04 by lstorey           #+#    #+#             */
/*   Updated: 2023/07/05 16:10:57 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*

int main(void)
{
	int *mod;
	int *div;
	int a;
	int b;

	a = 10;
	b = 3;

	div = &a;
	mod = &b;

	ft_div_mod(c, d, div, mod);

	printf("%d\n", *div);
	printf("%d", *mod);

	return (0);
}*/
