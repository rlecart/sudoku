/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:09:08 by rlecart           #+#    #+#             */
/*   Updated: 2017/08/10 17:35:05 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int		ft_error(void)
{
	ft_putstr("ERROR\n");
	return (-1);
}

int		ft_invalid_lines(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab && tab[i])
	{
		while (tab[i][j])
		{
			if (tab[i][j] != '.' && (tab[i][j] < '1' || tab[i][j] > '9'))
				return (0);
			j++;
		}
		if (j != 9)
			return (0);
		j = 0;
		i++;
	}
	if (i != 9)
		return (0);
	return (-1);
}

void	ft_display(char **tab)
{
	int		i;

	i = 0;
	while (tab && tab[i])
	{
		ft_putstr(tab[i]);
		ft_putstr("\n");
		i++;
	}
}

int		main(int argc, char **argv)
{
	argv += 1;
	if (argc == 10)
	{
		if (!(ft_invalid_lines(argv)))
			return (-1);
		if (!(ft_sudoku(argv, 0, 0, 1)))
			ft_display(argv);
	}
	else
		return (ft_error());
	return (0);
}
