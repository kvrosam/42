/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:16:14 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/19 11:47:29 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_lowstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	verif;

	i = 0;
	verif = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{	
			verif = 1;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			verif = 0;
		}
		if((verif) == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			verif = 0;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "hello kUro 42comment-ca va ?";

	printf("%s \n", ft_lowstr(str));
	printf("%s", ft_strcapitalize(str));
}
