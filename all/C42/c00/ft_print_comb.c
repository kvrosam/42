/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:20:00 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/15 18:00:44 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int c, int d, int u)
{
	if (c < d && d < u)
	{
		ft_putchar(c + '0');
		ft_putchar(d + '0');
		ft_putchar(u + '0');
		if (!(c == 7 && d == 8 && u == 9))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}	
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = 0;
	d = 1;
	u = 2;
	while (c <= 9)
	{
		while (d <= 9)
		{
			while (u <= 9)
			{
				ft_print(c, d, u);
				u++;
			}
			d++;
			u = 0;
		}
		c++;
		d = 0;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
