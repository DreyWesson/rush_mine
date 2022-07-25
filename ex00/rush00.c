/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 08:46:59 by doduwole          #+#    #+#             */
/*   Updated: 2022/07/24 22:28:41 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c);

int	rush(int x, int y)
{
	int i = 0;
	while (i < y)
	{
		int j = 0;
		while (j < x) {
			if ((i == 0 || i == y - 1) && (j == 0 || j == x - 1))
				ft_putchar('o');
			else
			{
				if (i > 0 && i != y - 1 && (j == 0 || j == x - 1))
					ft_putchar('|');
				else if (i == 0 || i == y - 1)
					ft_putchar('-');
				else
					ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return 0;
}
