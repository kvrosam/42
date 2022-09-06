/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:47:34 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/17 11:27:49 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	printf("div : %d, mod : %d ", *div, *mod);
}

int	main(void)
{	
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 6;
	b = 3;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	return (0);
}
