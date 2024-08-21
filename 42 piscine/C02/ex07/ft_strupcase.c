/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:44:52 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/13 18:47:26 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 96) && (str[i] < 123))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "aaaaaaaaaaaazzzzzz";
	char str1[] = "";

	printf("%s\n", ft_strupcase(str));
	printf("%s", ft_strupcase(str1));
}*/
