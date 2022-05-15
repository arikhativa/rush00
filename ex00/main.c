/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:16:29 by alejsanc          #+#    #+#             */
/*   Updated: 2022/05/15 15:58:34 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void rush();

int main(void)
{
	rush(1,1); printf("\n\n");
	rush(1,3); printf("\n\n");
	rush(3,1); printf("\n\n");
	rush(4,4); printf("\n\n");
	rush(40,5); printf("\n\n");
	return(0);
}
