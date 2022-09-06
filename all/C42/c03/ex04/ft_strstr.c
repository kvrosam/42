/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:04:05 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/25 14:09:14 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_lenstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = ft_lenstr(to_find);
	if (str[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j] && j < k)
		{
			i++;
			j++;
		}
		i = i - j;
		if (j == k)
			return (str + i);
		j = 0;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "ahshausfsu";
	char	tf[] = "";
	
	printf("%s", ft_strstr(str, tf));
	printf("%s", strstr(str, tf));
	return (0);
}

