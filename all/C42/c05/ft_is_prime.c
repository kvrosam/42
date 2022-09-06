/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:16:11 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/30 12:52:18 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
//	int	i = -2;
	printf("%d\n", ft_is_prime(2147483647));
/*
	while (i <= 100)
	{
		if (ft_is_prime(i) == 1)
			printf("%d est premier !\n", i);
		i++;
	}
*/
}
