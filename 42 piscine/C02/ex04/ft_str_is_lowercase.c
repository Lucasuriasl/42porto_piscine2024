/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:45:52 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/11 20:06:23 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			return (0);
		}
		++i;
	}
	return (1);
}

/*#include <stdio.h>

int main()
{
	int nmb;
	int nmb1;
	int nmb2;
	int nmb3;
	
	char a[] = "aaaaaaacccccccc";
	char b[] = "ABBBBBaaaaaa";
	char c[] = "CCCCC";
	char d[] = "####!!@@";
	
	nmb = ft_str_is_lowercase(a);
	nmb1 = ft_str_is_lowercase(b);
	nmb2 = ft_str_is_lowercase(c);
	nmb3 = ft_str_is_lowercase(d);
	
	printf("%d\n", nmb);
	printf("%d\n", nmb1);
	printf("%d\n", nmb2);
	printf("%d\n", nmb3); 
}*/
