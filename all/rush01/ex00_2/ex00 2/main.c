/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnieto-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:42:16 by vnieto-j          #+#    #+#             */
/*   Updated: 2022/08/21 20:21:58 by vnieto-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_verif_case(char **tab, int pos, char stock[4][5]);
int		ft_verif_double(char **tab, int pos, int nb);
int		ft_verif_case(char **tab, int pos, char stock[4][5]);
int		ft_strlen(char *str);
int		check_patterns(char **tab, char entry[4][5], int pos);
int		countbox(char **av);
void	put_str(char *str);

int	error_man(char **argv)
{
	int	j;

	j = 0;
	if (ft_strlen(argv[1]) == 31)// si la taille de l'argument n'est pas 32 error
	{
		while (j < argv[1][j])// parcours le premier argument "4 1 2 "
		{
			if ((j % 2 == 0 && argv[1][j] < '1') || (argv[1][j] > '4'))// verif la case pair de l'argument si c'est pas un nbr entre 1 et 4 error
				return (1);
			else if (j % 2 == 1 && argv[1][j] != ' ')// verif la case impair si c'est pas un espace error
				return (1);
			++j;
		}
	}
	else
		return (1);
	return (0);// c'est ok
}

int	main(int argc, char *argv[])
{
	if (argc != 2 || error_man(argv) != 0)// si le nombre d'arg est diff de 2 return error ou si la fonction error_man return 1 error
	{
		write(1, "Error\n", 6);
		return (1);
	}
	countbox(argv);
	return (0);
}
