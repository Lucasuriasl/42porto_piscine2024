/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:36:39 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/04 10:15:48 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	short	c;

	c = 123;
	while (--c > 96)
		write (1, &c, 1);
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}*/
