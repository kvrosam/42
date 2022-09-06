/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:28:28 by smlamali          #+#    #+#             */
/*   Updated: 2022/08/13 15:33:13 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void extern rush01(int x, int y);

int main(void)
{
	int x;
	int y;
	
	printf("Inserez x : ");
	scanf("%d", &x);
	printf("Inserez y ; ");
	scanf("%d", &y);
	printf("\n");
	rush01(x, y);
	return (0);
}
