/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:21:46 by rlecart           #+#    #+#             */
/*   Updated: 2017/08/10 17:32:00 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_sudoku(char **tab, int i, int j, int place)
{
	while (i < 9)
	{
		while (j < 9)
		{
			if (tab[i][j] == '.')
			{
				if (!(ft_check_all(tab, i, j, place)))
				{
					tab[i][j] = place + '0';
					if (!(ft_sudoku(tab, i, j + 1, 1)))
						return (0);
					else if (place++ < 10)
						tab[i][j] = '.';
				}
				else if (place++ >= 9)
					return (-1);
			}
			else
				j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
