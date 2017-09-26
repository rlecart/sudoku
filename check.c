/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:28:47 by rlecart           #+#    #+#             */
/*   Updated: 2017/08/10 17:32:42 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_check_line(char **tab, int i, int place)
{
	int		j;

	j = 0;
	while (tab && tab[i] && tab[i][j])
	{
		if (tab[i][j] == place + '0')
			return (-1);
		j++;
	}
	return (0);
}

int		ft_check_column(char **tab, int j, int place)
{
	int		i;

	i = 0;
	while (tab && tab[i] && tab[i][j])
	{
		if (tab[i][j] == place + '0')
			return (-1);
		i++;
	}
	return (0);
}

int		ft_check_square(char **tab, int i, int j, int place)
{
	int		i2;
	int		j2;

	i2 = 0;
	j2 = 0;
	while (j % 3 != 0)
		j--;
	while (i % 3 != 0)
		i--;
	while (i2 < 3)
	{
		while (j2 < 3)
		{
			if (tab[i + i2][j + j2] == place + '0')
				return (-1);
			j2++;
		}
		j2 = 0;
		i2++;
	}
	return (0);
}

int		ft_check_all(char **tab, int i, int j, int place)
{
	if (place <= 9
			&& !(ft_check_line(tab, i, place))
			&& !(ft_check_column(tab, j, place))
			&& !(ft_check_square(tab, i, j, place)))
		return (0);
	return (-1);
}
