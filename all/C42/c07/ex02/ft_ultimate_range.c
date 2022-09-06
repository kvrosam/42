/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:49:26 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/31 04:11:39 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_len(int *tab)
{
	int i;

	i = 0;
	while (tab[i] != '\0')
		i++;
	return (i);
}
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while(l < (max - min))
		l++;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	range[0] = malloc(sizeof(long) * l);
	if (!(*range))
		return (-1);
	while (i < l)
	{
		range[0][i] = min + i;
		i++;
	}
	return (l);
}

int main(void)
{
	int	*range;
	printf("%d\n", ft_ultimate_range(&range, 6, 10));
	printf("%d %d %d %d\n", range[0], range[1], range[2], range[3]);
}
