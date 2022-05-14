/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:14:21 by alejsanc          #+#    #+#             */
/*   Updated: 2022/05/14 22:23:55 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#define CORNER_1 'A'
#define CORNER_2 'C'
#define LINE 'B'
#define MID ' '

//--------------LIBRERIAS----------
#include<stdio.h>
#include<unistd.h>

//--------------FUNCIONES----------
void ft_putchar();

//--------------VARIABLES----------
//int column;
//int row;
int cont;

int row = 1;
int column = 1;

//------------RHYTHM&BLUES---------
// y es FILA!!!!!!!! x es COLUMNA!!!!!!!

void ft_rush(int x, int y)
{
    cont = x*y;
    while (cont > 0)
    {
        if((row == 1 && column == 1) || (row = y && column == x))
            ft_putchar(CORNER_1);

        else if ((row == 1 && column == x) || (row == y && column == 1))
            ft_putchar(CORNER_2);

        else if (row > 1 && row < y && column > 1 && column < x)
            ft_putchar(MID);

        else
            ft_putchar(LINE);
        column++;
        cont++;
        if (column == x)
        {
            column=1;
            row++;
        }
    }
}
