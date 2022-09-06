/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:34:53 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/17 12:26:44 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;
	
	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
	printf("div : %d, mod : %d", *a, *b);
}

int	main(void)
{	
	int	c;
	int	d;
	int *a;
	int	*b;

	c = 3;
	d = 2;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a, b);
	return (0);
}
