/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:29:24 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/11 14:29:28 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*#include <stdio.h>
int    main()
{
    char str1[] = "abcghij[`aBCZ";
    char str2[] = "23adsaffq";
    char str3[] = "asddadsa";
    
    ft_str_is_alpha(str1);
    
    printf("%d\n", ft_str_is_alpha(str1));
    printf("%d\n", ft_str_is_alpha(str2));
    printf("%d\n", ft_str_is_alpha(str3));
    
    return 0;
}*/
