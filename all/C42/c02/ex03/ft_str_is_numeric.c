/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:33:10 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/21 02:59:05 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
		{
			printf("%c \n", str[i]);
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
	char	nb[] = "123";
	char	esp[] = "4564a4564";
	char	ept[] = "";

	printf("nb : %d \n", ft_str_is_numeric(nb));
	printf("esp : %d \n", ft_str_is_numeric(esp));
	printf("empty : %d \n", ft_str_is_numeric(ept));
	return (0);
}
