/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:10:26 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/20 15:30:36 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	j;

	j = 0;
	if (argc == 2)
	{
		if (ft_strlen(argv[1]) == 31)
		{
			while (j < argv[1][j])
			{
				if ((j % 2 == 0 && argv[1][j] < '1') || (argv[1][j] > '4'))
				{
					write(1, "Error\n", 6);
					break;
				}
				else if (j % 2 == 1 && argv[1][j] != ' ')
				{
					write(1, "Error_space\n", 12);
					break;
				}
				j++;
			}
		}
		else
		{
			write(1, "Error_nb\n", 9);
		}
	}
	else
	{
		write(1, "Error_arg\n", 10);
	}
}
