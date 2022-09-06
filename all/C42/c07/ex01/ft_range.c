/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:06:59 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/31 12:45:04 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	s;
	int	*tab;

	i = 0;
	s = 0;
	tab = NULL;
	if (min >= max)
		return (tab);
	while (s < (max - min))
		s++;
	tab = malloc(sizeof(int) * (max - min));
	while (i < s)
	{
		tab[i] = min;
		i++;
		min ++;
	}
	return (tab);

}

int main(void)
{
	int	i;
	int *tab2;
	
	i = 0;
	tab2 = ft_range(200, 200);
	while (i < (200 - 200))
	{
		printf("%d:%p\n", tab2[i], tab2);
		i++;
	}	
}
