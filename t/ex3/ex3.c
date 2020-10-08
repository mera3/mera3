/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 20:08:20 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/04 15:10:54 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		if ((*str < 110 && *str > 96) || (*str < 78 && *str > 64))
			*str = *str + 13;
		else
			*str = *str - 13;
		write(1, str++, 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(&argv[1][0]);
		write(1, "\n", 1);
	}
	return (0);
}
