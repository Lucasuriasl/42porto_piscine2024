/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:10:55 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/13 20:10:56 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64) && (str[i] < 91))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "AAAAAAAAAAA";
	char str1[] = "CCCCCCCc12312312c";

	printf("%s\n", ft_strlowcase(str));
	printf("%s", ft_strlowcase(str1));
}*/
