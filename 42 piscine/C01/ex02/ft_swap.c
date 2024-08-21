/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:13:42 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/06 14:13:50 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int*b)

{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*#include <stdio.h>

int	main(void)
{
	int	n;
	int	n1;

	n = 1;
	n1 = 2;
	printf("Antes\n %d %d\n", n, n1);
	ft_swap(&n, &n1);
	printf("Depois\n %d %d\n", n, n1);
}*/
