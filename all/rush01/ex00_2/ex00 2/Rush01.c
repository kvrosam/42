/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnieto-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:00:43 by vnieto-j          #+#    #+#             */
/*   Updated: 2022/08/21 20:21:16 by vnieto-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_verif_double(char **tab, int pos, int nb);
int ft_verif_case(char **tab, int pos, char stock[4][5]);
int ft_strlen(char *str);
void put_str(char *str);

int check_patterns(char **tab, char stock[4][5], int pos) // prends notre tab initialise avec que des 0, prends les aguments d'entree, prends la pos du tableau
{
	int size;

	if (pos == 16) // si pos = 16 s'arrete des qu'on est a la fin du tableau
		// remplir un a un les carre en rappelant la mm fonction
		return (1);
	size = 0;
	while (++size <= 4) // valeur  des towers
	{
		if (ft_verif_double(tab, pos, size) == 0) // verifie si notre nombre est pas en double
		// verif le nouveau chiffre avec les lignes et les colonnes voir si il existe deja si ça passe pas sors de la condition et fais + 1 a size
		{
			tab[pos / 4][pos % 4] = size + 48; // prends la pos du tab (en gros tab[0][[0]]) et + 48 pour transforme en char
			// c'est ici qu'on remplis le tab à la pos avec size
			if (ft_verif_case(tab, pos, stock) == 0) // celle qui verifie si les cases coincide avec les args
			{
				if (check_patterns(tab, stock, pos + 1) == 1) // rappelle la fonction et augmente pos de 1
															  // donc si a passé toutes les verifs rapelle checkpattern jusqu'a arrivé a 16
					return (1);
			}
			else
				tab[pos / 4][pos % 4] = 0 + 48; // si n'a pas trouvee de soluce met 0
		}
	}
	return (0);
} // checkpattern initialise une size a 0 jusqua 4 -> il passe dans verif double 4x si y'a un pb remplace par des 0 jusqua sa soit bon
// ne fait pas la ligne de maniere continue va remplir les cases une a une et des arriver en fin de ligne il va passer dans les fonctions verif si c bon

int ft_error(char **stack)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = -1;
	while (++k < 4) // parcours notre tableau
	{
		if (stack[i][j] == '0') // si y'a 0 dedans
		{
			write(1, "Error\n", 6); // return error
			return (1);
		}
		i++;
		j++;
	}
	return (0);
}

int ft_affiche(char **stack)
{
	int i;

	i = -1;
	if (ft_error(stack) != 1) // verif si notre tableau a une erreur genre un 0 et renvoie error
	{
		while (++i < 4)
			put_str(stack[i]); // affiche les 4 lignes de notre tableau
	}
	return (0);
}

void aff_tab(char stock[4][5], char *str_av)
{
	stock[0][0] = str_av[0];
	stock[0][1] = str_av[2];
	stock[0][2] = str_av[4];
	stock[0][3] = str_av[6];
	stock[0][4] = '\0';
	stock[1][0] = str_av[8];
	stock[1][1] = str_av[10];
	stock[1][2] = str_av[12];
	stock[1][3] = str_av[14];
	stock[1][4] = '\0';
	stock[2][0] = str_av[16];
	stock[2][1] = str_av[18];
	stock[2][2] = str_av[20];
	stock[2][3] = str_av[22];
	stock[2][4] = '\0';
	stock[3][0] = str_av[24];
	stock[3][1] = str_av[26];
	stock[3][2] = str_av[28];
	stock[3][3] = str_av[30];
	stock[3][4] = '\0';
}

int countbox(char **av)
{
	int i;
	int j;
	char **stack;	  // sortie de notre tableau
	char stock[4][5]; // argument

	aff_tab(stock, av[1]);				// afficher le tableau des arguments vu que c'est des char
	i = -1;								// on initialise a -1 car on ++i dans la boucle
	j = -1;								// la meme
	stack = malloc(sizeof(char *) * 4); // alloue la taille d'un char x 4
	if (!stack)							// securite pour le malloc si ton stack n'est pas vrai return 0 pour bloquer
		return (0);
	while (++i < 4)
	{
		stack[i] = malloc(sizeof(char *) * 4); // pour avoir le tableau en 2 dimensions
		while (++j < 4)
			stack[i][j] = '0'; // notre tableau est mis avec que des 0
		j = -1;
	}
	check_patterns(stack, stock, 0); // ce qui va nous donner le tableau complet ave les reponses sachant que 0 et la position
	ft_affiche(stack);				 // affiche notre tableau une fois tout bon si y'a une erreur return error
	i = -1;
	while (i < 4) // securite pour free le malloc on le fait 4x parce qu'on a malloc stack 4x
		free(stack[++i]);
	free(stack);
	return (0);
}
