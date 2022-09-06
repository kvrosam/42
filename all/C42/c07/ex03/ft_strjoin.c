/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 04:13:10 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/31 16:11:04 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_write_in_c(char *str, char *c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		c[i] = str[i];
		i++;
}
void	ft_write_sep(char *c, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(c);
	while (sep[i] != '\0')
		c[j] = sep[i];
		i++;
		j++;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	char *c;

	i = 0;
	c = malloc(sizeof(c) * size);
	if (size == 0)
	{
		c = NULL;
		c[0] = '\0';
		return (c);
	}
	
	while (strs)
	{
		c[i] = strs[i];
		i++;
		ft_write_sep(c, sep);                        

	}

	return (c);
}
