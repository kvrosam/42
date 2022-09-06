/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:23:28 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/18 18:23:06 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char	others[] = "binks ! no ; sake";
	char	retur[] = "\n";
	char	empty[] = "";

	printf("others = %d\n", ft_str_is_printable(others));
	printf("retur = %d\n", ft_str_is_printable(retur));
	printf("empty = %d\n", ft_str_is_printable(empty));
	return (0);
}
