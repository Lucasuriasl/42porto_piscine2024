/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:28:07 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/11 16:06:08 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 47 && str[i] < 58))
		{
			return (0);
		}
		++i;
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("a1aaa"));
	printf("%d\n", ft_str_is_numeric("11231231234"));
	printf("%d\n", ft_str_is_numeric("aaaaaa"));
}
*/
/* TESTESTESTETESTE vvvvvv


#include <unistd.h>

int ft_str_is_numeric(char *str)
{
  int i;
  
  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] <= 47 || str[i] >= 58)
    {
      return 0;
    }
    ++i;
  }
  return 1;
}

#include <stdio.h>

int main()
{
  int nmb;
  char a[] = "111111111";
  nmb = ft_str_is_numeric(a);
  printf("%d\n", nmb);
  
  
  
}*/
