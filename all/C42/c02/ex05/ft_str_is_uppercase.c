/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:04:59 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/21 03:03:13 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	
	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0') 
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

int	main(void)
{
	char	maj[] = "AAAAAAAAAAHZZZ";
	char	pasmaj[] = "46363";
	char	empt[] = "";

	printf("maj : %d\n", ft_str_is_uppercase(maj));
	printf("pasmaj : %d\n", ft_str_is_uppercase(pasmaj));
	printf("empt : %d\n", ft_str_is_uppercase(empt));
	return (0);
}
