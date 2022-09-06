/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:52:41 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/21 03:00:58 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}	
		i++;
	}
	return (1);
}

int	main(void)
{
	char min[] = "fdgerfe";
	char trap[] = "gfdnAPge";
	char empty[] = "";
	
	printf(" min = %d", ft_str_is_lowercase(min));
	printf(" min = %d", ft_str_is_lowercase(trap));
	printf(" min = %d", ft_str_is_lowercase(empty));

	return (0);
}
