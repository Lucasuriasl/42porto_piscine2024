/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 09:44:48 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/07 09:44:57 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*	
#include <stdio.h>
int main(void)
{
	int a;
	int b;
	a = 10;
	b = 5;
	ft_ultimate_div_mod(&a, &b); 
	printf("Result: %d\n", a); 
	printf("Rest: %d\n", b);
}*/
