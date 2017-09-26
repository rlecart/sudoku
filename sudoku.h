/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:20:34 by rlecart           #+#    #+#             */
/*   Updated: 2017/08/10 17:32:08 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putstr(char *str);
int		ft_sudoku(char **tab, int i, int j, int place);
int		ft_check_all(char **tab, int i, int j, int place);

#endif
