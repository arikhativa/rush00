/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:14:21 by alejsanc          #+#    #+#             */
/*   Updated: 2022/05/15 16:00:23 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>
#define CORNER_1 'A'
#define CORNER_2 'C'
#define CORNER_3 'A'
#define CORNER_4 'C'
#define RT  'B'
#define WALL  'B'
#define MID ' '

void	ft_putchar(char c);
void	print_first_row(int x);
void	print_last_row(int x);
void	print_mid_row(int x, int y);

void	rush(int x, int y)
{
	int	cont;

	cont = 1;
	while (cont <= y)
	{
		if (cont == 1)
		{
			print_first_row(x);
			ft_putchar('\n');
		}
		else if (cont == y)
		{
			print_last_row(x);
		}
		else
			print_mid_row(x, y);
		cont++;
	}
}

void	print_first_row(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar(CORNER_1);
		else if (col == x)
			ft_putchar(CORNER_2);
		else
			ft_putchar(RT);
		col++;
	}
}

void	print_last_row(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar(CORNER_3);
		else if (col == x)
			ft_putchar(CORNER_4);
		else
			ft_putchar(RT);
		col++;
	}
}

void	print_mid_row(int x, int y)
{
	int	row;
	int	col;

	col = 1;
	row = 2;
	while (row < y)
	{
		while (col <= x)
		{
			if (col == 1 && x != 1)
				ft_putchar(WALL);
			else if (col == x)
			{
				ft_putchar(WALL);
				ft_putchar('\n');
			}
			else
				ft_putchar(MID);
			col++;
		}
		row++;
	}
}
