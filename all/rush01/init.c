#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_matrice(char  **tab)	//Initialise la matrice
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while(i < 6)
	{
		j = 0;
		while(j < 6)
		{
			tab[i][j] = '8';
			j++;
		}
		tab[i][j] = '\0';
		i++;
	}
}

void	ft_printtab(char **tab)	//Affiche un plateau
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(tab[i])
	{
		j = 0;
		while(tab[i][j])
		{
			ft_putchar(tab[i][j]);
			ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int	main(void)
{
        char    **tab;
	int	i;

	i = 0;
	tab = malloc(6 * sizeof(char *));	
	while (i < 6)
	{
		tab[i] = malloc(6 * sizeof(char));
		i ++;
	}
        ft_matrice(tab);
        ft_printtab(tab);
}
