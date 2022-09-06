/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnieto-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:15:19 by vnieto-j          #+#    #+#             */
/*   Updated: 2022/08/21 18:27:24 by vnieto-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verif_double(char **tab, int pos, int nb)
{
	int	i;

	i = -1;
	while (++i < pos / 4)//lignes du tab
		if (tab[i][pos % 4] == nb + 48)
			return (1);
	i = -1;
	while (++i < pos % 4) // colonne du tab
		if (tab[pos / 4][i] == nb + 48)
			return (1);
	return (0);
}

int	ft_verif_col_up(char **tab, int pos, char stock[4][5])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][pos % 4] > max + 48) // Si  tab[0][0] est superieur a max (egal a 0) + 48 car impossible de comparer des char avec des int. int -> en char 
			{
				max = tab[i][pos % 4] - 48;
				count++;
			}
			i++;
		}
		if (stock[0][pos % 4] != count + 48)
			return (1);
	}
	return (0);
}

int	ft_verif_col_down(char **tab, int pos, char stock[4][5])
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][pos % 4] > max + 48)
			{
				max = tab[i][pos % 4] - 48;
				count++;
			}
			i--;
		}
		if (stock[1][pos % 4] != count + 48)
			return (1);
	}
	return (0);
}

int	ft_verif_row_left(char **tab, int pos, char stock[4][5])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;//valeur de notre plus grand building
	count = 0;//nombre de building qui voit
	if (pos % 4 == 3)// tant que je n'arrive pas a la fin de la ligne [0,1,2,3]
	{
		while (i < 4)//on parcours 4 x
		{
			if (tab[pos / 4][i] > max + 48)//si le building est plus grand que max on rentre dans la condition
			{
				max = tab[pos / 4][i] - 48;// on assigne au max le nouveau building le + grand; - 48  car on a un char et on veut le mettre en int pour le max
				count++;//on augmente count
			}
			i++;
		}
		if (stock[2][pos / 4] != count + 48)//verifie si l'argument est egal au nombre de building comptees precedemment si il est pas egal return une erreur
			return (1);
	}
	return (0);
}

int	ft_verif_row_right(char **tab, int pos, char stock[4][5])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = 4;
	max_size = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[pos / 4][i] > max_size + 48)
			{
				max_size = tab[pos / 4][i] - 48;
				visible_towers++;
			}
		}
		if (stock[3][pos / 4] != visible_towers + 48)
			return (1);
	}
	return (0);
}
