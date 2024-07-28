/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:53:06 by rahaddi           #+#    #+#             */
/*   Updated: 2024/07/28 11:27:08 by rahaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush_print(int columns_count, int lines_count, int columns, int lines)
{
	if (columns_count == 1 && lines_count == 1)
		ft_putchar('/');
	else if (columns_count == columns && lines_count == 1)
		ft_putchar('\\');
	else if (columns_count == 1 && lines_count == lines)
		ft_putchar('\\');
	else if (columns_count == columns && lines_count == lines)
		ft_putchar('/');
	else if (lines_count == 1 || lines_count == lines)
		ft_putchar('*');
	else if (columns_count == 1 || columns_count == columns)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int columns, int lines)
{
	int	columns_count;
	int	lines_count;

	columns_count = 1;
	lines_count = 1;
	if (columns <= 0 || lines <= 0)
	{
		write(1, "error\n", 7);
	}
	else
	{
		while (lines_count <= lines)
		{
			columns_count = 1;
			while (columns_count <= columns)
			{
				rush_print(columns_count, lines_count, columns, lines);
				columns_count++;
			}
			lines_count++;
			ft_putchar('\n');
		}
	}
}
