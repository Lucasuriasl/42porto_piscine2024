/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:21:28 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/12 21:04:25 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			return (0);
		}
		++i;
	}
	return (1);
}
/*

#include <stdio.h>

int main()
{
	int nmb;
	int nmb1;
	int nmb2;
	int nmb3;
	
	char a[] = "aaaaaaacccccccc";
	char b[] = "";
	char c[] = "CCCCC";
	char d[] = "####!!@@";
	
	nmb = ft_str_is_uppercase(a);
	nmb1 = ft_str_is_uppercase(b);
	nmb2 = ft_str_is_uppercase(c);
	nmb3 = ft_str_is_uppercase(d);
	
	printf("%d\n", nmb);
	printf("%d\n", nmb1);
	printf("%d\n", nmb2);
	printf("%d\n", nmb3); 
}*/
