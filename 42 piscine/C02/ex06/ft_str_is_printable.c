/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:28:48 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/13 18:37:25 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	char	str[] = "aaaaaa";
	char	str1[] = "\t"; 
	char	str2[] = "\n"; 
	char	str3[] = "12321321312321"; 
	 
	printf("%d\n", ft_str_is_printable(str));
	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	
}*/
