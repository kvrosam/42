/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:20:21 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/20 21:27:53 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int j;
	int	tmp;

	i = 0;
	j = 0;
	while(size > 0)
	{
		while (j < size)
		{
			while(tab[j] > tab[i])
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
				i++;
			}
			j++;
			i = 0;
		}
		size--;
	}
}

int	main(void)
{
	int c[5] = {6, 0, 2, 8, 1};
	ft_sort_int_tab(c, 5);
	printf("%d, %d, %d, %d, %d", c[0], c[1], c[2], c[3], c[4]);
	return (0);
}
