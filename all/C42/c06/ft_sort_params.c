/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:04:25 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/31 02:09:42 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(car *s1, *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	int	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void ft_sort(int argc, char *argv[])
{
	int	i;
	
	i = 0;
	while (argc > 0)
	{
		while (i < argc)
		{
			if (ft_strcmp(argv[i], argv[i+1]) > 0)
				ft_swap(argv + i, argv + i + 1);
			i++;
		}
	}
}

int	main(int agrc, char *argv[])
{
	
}
