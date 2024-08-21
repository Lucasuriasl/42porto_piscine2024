/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:41:04 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/14 14:42:28 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)

{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char s1[] = "A";
	char s2[] = "XYAAAAAAAZ";
	

	int result = ft_strcmp(s1, s2);
	printf("%d\n", result);
	
	result = strcmp(s1, s2);
	printf("C: %d\n", result);
}*/
