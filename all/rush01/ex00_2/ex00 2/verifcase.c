/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifcase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnieto-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:22:19 by vnieto-j          #+#    #+#             */
/*   Updated: 2022/08/21 18:27:12 by vnieto-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verif_double(char **tab, int pos, int nb);
int	ft_verif_col_up(char **tab, int pos, char stock[4][5]);
int	ft_verif_col_down(char **tab, int pos, char stock[4][5]);
int	ft_verif_row_left(char **tab, int pos, char stock[4][5]);
int	ft_verif_row_right(char **tab, int pos, char stock[4][5]);

int	ft_verif_case(char **tab, int pos, char stock[4][5])// prends notre tab, la position et les argument 
{
	if (ft_verif_row_left(tab, pos, stock) == 1)//verifie si de gauche a droite les argument et les nombres sont ok
		return (1);
	if (ft_verif_row_right(tab, pos, stock) == 1)//verifie si de gauche a droite les argument et les nombres sont ok
		return (1);
	if (ft_verif_col_down(tab, pos, stock) == 1)
		return (1);
	if (ft_verif_col_up(tab, pos, stock) == 1)
		return (1);
	return (0);
}
