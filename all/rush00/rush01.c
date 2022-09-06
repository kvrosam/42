/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:05:43 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/13 15:51:12 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void extern	ft_putchar(char c);
void	rush01(int x, int y);
void	ft_top_line(int x, int y);
void	ft_mid_lines(int x, int y);
void	ft_bottom_line(int x, int y);
void	space(int x);

void	ft_top_line(int x, int y)
{
	int	i;

	i = 1;
	if (x > 0 && y > 0)
	{
		ft_putchar('/');
	}
	while (i < x)
	{
		while (i <= (x - 2))
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('\\');
		i++;
	}
	ft_putchar('\n');
}

void	ft_mid_lines(int x, int y)
{
	int l;
	int s;

	l = 1;
	s = 1;
	if (x == 1)
	{
		while (l <= (y - 2))
		{
			ft_putchar('*');
			ft_putchar('\n');
			l++;
		}
	}
	else
	{
		while (l <= (y - 2))
		{
			ft_putchar('*');
			space(x);
			ft_putchar('*');
			ft_putchar('\n');
			l++;
		}	
	}
}

void	ft_bottom_line(int x, int y)
{
	int i;

	i = 1;
	if (y > 1)
	{
		ft_putchar('\\');
	}
	if (y > 1)
	{
		while (i < x)
		{
			while (i <= (x - 2))
			{
				ft_putchar('*');
				i++;
			}
			i++;
			ft_putchar('/');
		}
	}	
}

void	space(int x)
{
	int	s;

	s = 1;
	while (s <= (x - 2))
	{
		ft_putchar(' ');
		s++;
	}
}

void	rush01(int x, int y)
{
	ft_top_line(x, y);
	ft_mid_lines(x, y);
	ft_bottom_line(x, y);
}
