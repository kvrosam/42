/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:23:28 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/25 19:23:30 by smlamali         ###   ########.fr       */
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
	char s1a[] = "This is OK for now";
        char s2a[] = "OK";
        char s1b[] = "This is OK for now";
        char s2b[] = "OK";
        char s3a[] = "Same";
        char s4a[] = "";
        char s3b[] = "Same";
        char s4b[] = "";
        char s5a[] = "Shorter";
        char s6a[] = "Than";
        char s5b[] = "Shorter";
        char s6b[] = "Than";

        printf("%s:%s\n", ft_strstr(s1a, s2a), strstr(s1b, s2b));
        printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
        printf("%s:%s\n", ft_strstr(s3a, s4a), strstr(s3b, s4b));
        printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
        printf("%s:%s\n", ft_strstr(s5a, s6a), strstr(s5b, s6b));
        printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "Success" : "Fail");
}