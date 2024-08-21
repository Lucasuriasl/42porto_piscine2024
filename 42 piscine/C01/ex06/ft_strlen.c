/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:27:08 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/07 14:27:10 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)

{
	int	n;

	n = 0;
	while (str[n] != '\0')
		++n;
	return (n);
}
/*#include <stdio.h>
int main()
{	
	char	*str;
	str = "aaaaa";
	int n;
	n = ft_strlen(str);
	printf("Number of characters in a string: %d\n", n);
}*/
