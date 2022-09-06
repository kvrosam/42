/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:22:01 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/20 21:15:56 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main (void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 10;
	b = 4;
	ptra = &a;
	ptrb = &b;

	ft_swap(ptra, ptrb);
	printf("a : %d, b : %d", a, b);
	return (0);
}
