/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:24:15 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/14 15:24:16 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char s1[] = "0";
	char s2[] = "0";

	int result = ft_strncmp(s1, s2, 5);
	printf("%d\n", result);
	
	char s3[] = "0";
	char s4[] = "0";
	
	int res = strncmp(s3, s4, 5);
	printf("C: %d\n", res);

}*/
