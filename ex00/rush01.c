/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:29:22 by doduwole          #+#    #+#             */
/*   Updated: 2022/07/25 10:38:53 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_char(int i, int j, int x, int y)
{
	if ((i == 0 || i == y - 1) && (j == 0 || j == x - 1))
	{
		if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
			ft_putchar('C');
		else
			ft_putchar('A');
	}
	else
	{
		if (i > 0 && i != y - 1 && (j == 0 || j == x - 1))
			ft_putchar('B');
		else if (i == 0 || i == y - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

int	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_print_char(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}