/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:53:28 by rahaddi           #+#    #+#             */
/*   Updated: 2024/07/27 19:53:29 by rahaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush_print(int i, int j, int columns, int lines)
{
	if ((i == 0 && j == 0) || (i == columns - 1 && j == 0))
		ft_putchar('o');
	else if ((i == 0 && j == lines - 1) || (i == columns - 1 && j == lines - 1))
		ft_putchar('o');
	else if (j == 0 || j == lines - 1)
		ft_putchar('-');
	else if ((i == 0 || i == columns - 1))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int columns, int lines)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (columns <= 0 || lines <= 0)
		write(1, "error", 6);
	while (j < lines)
	{
		i = 0;
		while (i < columns)
		{
			rush_print(i, j, columns, lines);
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}
