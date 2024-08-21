/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:02:20 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/07 11:02:22 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)

{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*int main()
{
	char *str = "teste teste teste aaasdad";
	ft_putstr(str);
}*/
