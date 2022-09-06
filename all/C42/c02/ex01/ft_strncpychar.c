/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpychar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:32:44 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/25 09:06:57 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';	
		i++;
	}

	return dest;
}

int	main(void)
{
	char src[] = "rip";
	char dest[] = "okay master ! lets kill da hoe";
	
	printf("%s", ft_strncpy(dest, src, 2));
	printf("\n");
	printf("%s", strncpy(dest, src, 2));
	return (0);
}
