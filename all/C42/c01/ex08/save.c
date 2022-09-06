/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:20:21 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/20 23:59:55 by smlamali         ###   ########.fr       */
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
	while (i < size)
	{
		while (j < size)
		{
			if(tab[j] >= tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
				printf("\n%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
			}
			j++;
		}
		j = 0;
		i++;
	}
}

int	main(void)
{
	int c[5] = {6, 0, 2, 8, 1};
	ft_sort_int_tab(c, 5);
	printf("\n%d, %d, %d, %d, %d", c[0], c[1], c[2], c[3], c[4]);
	return (0);
}
