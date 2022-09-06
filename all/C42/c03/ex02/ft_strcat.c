/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:02:49 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/25 11:25:26 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	ls1;
	int	ls2;

	ls1 = ft_strlen(src);
	ls2 = ft_strlen(dest);
	i = ls2;
	j = 0;

	while (i <= (ls1 + ls2))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char	dest[] = "hein";
	char	src[] = "deux?";
	
	ft_strcat(dest, src);
	printf("c : %s \n", dest);
	 
	return (0);
}
