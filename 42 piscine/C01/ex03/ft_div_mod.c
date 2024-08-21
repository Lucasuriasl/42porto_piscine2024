/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:46:10 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/06 16:46:17 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int main()
{
    int a = 10;
    int b = 2;
    int div;
    int mod;

    
    ft_div_mod(a, b, &div, &mod);

    printf("\n a = %d b = %d \n div = %d  mod: %d\n\n", a, b, div, mod);
}*/
